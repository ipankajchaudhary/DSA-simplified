#include <bits/stdc++.h>
using namespace std;

void scan(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i]<<" ";
    }
}
int lomuto(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <=h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
        /* code */
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}
int hoare(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if(i>=j)
            return j;
        swap(arr[j], arr[i]);
    }
}
void quicksortbylomuto(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = lomuto(arr, l, h);
        quicksortbylomuto(arr, l, p - 1);
        quicksortbylomuto(arr, p + 1, h);
    }
}
void quicksortbyhoare(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = hoare(arr, l, h);
        quicksortbyhoare(arr, l, p - 1);
        quicksortbyhoare(arr, p + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    quicksortbylomuto(arr, 0, n - 1);
    print(arr, n);
    return 0;
}