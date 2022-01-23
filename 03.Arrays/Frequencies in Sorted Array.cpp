// I/P :   6
//         10 10 10 25 30 30
// O/P :   10  3
//         25  1
//         30  2
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
    int i = 1, f = 1;
    while(i<n)
    {
        while(arr[i-1] == arr[i])
        {
            f++;
            i++;
        }
        cout << arr[i - 1] << " " << f<<"\n";
        i++;
        f = 1;
    }
    if(n == 1 || arr[n-1]!=arr[n-2])
    {
        cout << arr[n - 1] << " " << 1;
    }

    return 0;
}