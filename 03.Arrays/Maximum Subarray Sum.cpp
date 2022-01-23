// I/P :   7
//         2 3 -8 7 -1 2 3
// O/P :   11
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
    scan(arr,n);
    int res = arr[0];
    int m = arr[0];
    for(int i = 1; i < n; i++)
    {
        m = max(m + arr[i], arr[i]);
        res = max(res, m);
    }
    cout << res;

    return 0;
}