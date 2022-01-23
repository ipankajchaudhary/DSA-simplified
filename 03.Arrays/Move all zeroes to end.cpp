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
    scan(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    print(arr, n);

    return 0;
}