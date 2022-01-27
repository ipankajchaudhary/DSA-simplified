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
    int a[n];
    scan(a, n);
    bool flag = false;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || a[mid] >= a[mid-1]) && ((mid == n-1 || a[mid] >= a[mid+1])))
        {
            cout << mid;
            flag = true;
            break;
        }
        if (mid > 0 && (a[mid] <= a[mid-1]))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (!flag)
    {
        cout << -1;
    }

    return 0;
}