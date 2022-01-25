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
    int curr = 1;
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if((arr[i]%2 == 0 && arr[i-1]%2==1) || (arr[i-1]%2 == 0 && arr[i]%2==1))
        {
            curr++;
            res = max(res, curr);
        }
        else{
            curr = 1;
        }
    }
    cout << res;

    return 0;
}