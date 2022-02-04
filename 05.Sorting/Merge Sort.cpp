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
void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[mid+1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i<n1 && j<n2)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else{
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while (i<n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
     while (j<n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
void merge_sort(int a[], int low,int high)
{
    if(low<high)
    {
        int mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    merge_sort(arr, 0, n - 1);
    print(arr, n);

    return 0;
}