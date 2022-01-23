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
        cout << A[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    scan(a, n);
    int low = 0, high = n - 1;
    while(low<high)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
    print(a, n);
    return 0;
}