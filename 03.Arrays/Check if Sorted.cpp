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
    scan(arr,n);
    bool flag = true;
    for (int  i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            flag = false;
            break;
        }
    }
    flag ? cout << "True" : cout << "False";

    return 0;
}