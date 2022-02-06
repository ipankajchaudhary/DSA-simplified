#include <iostream>
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
        cout << A[i];
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j  = low; j < high; j++)
    {
        /* code */
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
int findkthsmallest(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<=high)
    {
        int p = partition(arr,low,high);
        if(p == k)
        {
            ans = p;
            return p;
        }
        if(p<k)
        {
            low = p + 1;
        }
        else{
            high = p - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr, n);
    int k;
    cin >> k;
    cout << findkthsmallest(arr, n, k);

    return 0;
}