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
        cout << A[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    scan(arr,n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            /* code */
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, n);

    return 0;
}