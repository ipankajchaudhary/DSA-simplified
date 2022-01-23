// I/P:    7
//         2 3 10 6 4 8 1
// O/P:    8
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
    cin >> n;
    int arr[n];
    scan(arr, n);
    int res = arr[1] - arr[0];
    int m = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res,arr[i]-m);
        m = min(m, arr[i]);
    }
    cout << res;

    return 0;
}