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
    int count = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count == 0)
        {
            count = 1;
            res = i;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
    }
    if(count<=n/2)
    {
        cout << "-1";
    }
    else{
        cout << arr[res];
    }
    
    
    return 0;
}   