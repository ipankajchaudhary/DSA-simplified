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
    for (int i = 1; i < n; i++)
    {
        int val = arr[i];
        int index = i - 1;
        while(index >= 0 && arr[index] > val)
        {
            arr[index + 1] = arr[index];
            index--;
        }
        arr[index + 1] = val;
    }
    print(arr, n);

    return 0;
}