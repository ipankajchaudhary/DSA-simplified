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
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout << "From " << i << " to ";
            }
            else{
                cout << (i - 1)<<"\n";
            }
        }
    }
    if(arr[n-1]!=arr[0])
    {
        cout << n - 1 << "\n";
    }
    
    return 0;
}