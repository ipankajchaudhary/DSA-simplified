// I/P :   5
//         1 5 3 8 12
// O/P :   13
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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    scan(arr, n);
    int p = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            p += (arr[i] - arr[i - 1]);
        }
    }
    cout << p;

    return 0;
}