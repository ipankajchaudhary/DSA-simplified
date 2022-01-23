// I/P :   5
//         0 1 1 0 1 0
// O/P :   3
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
    int res = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            c = 0;
        }
        else{
            c++;
        }
        res = max(res, c);
    }
    cout << res;

    return 0;
}