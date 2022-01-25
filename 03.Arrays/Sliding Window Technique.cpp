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
    int k;
    cin >> k;
    int arr[n];
    scan(arr,n);
    int sum = 0;
    for (int  i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];
        maxsum = max(maxsum, sum);
    }
    cout << maxsum;

    return 0;
}