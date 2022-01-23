//  An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader
// I/P :   7
//         7 10 4 3 6 5 2
// O/P :   10 6 5 2

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
    cout << arr[n - 1] << " ";
    int x = arr[n - 1];
    for (int i = n - 2; i >= 0;i--)
    {
        if(arr[i]>x)
        {
            x = arr[i];
            cout << x << " ";
        }
    }
    return 0;
}