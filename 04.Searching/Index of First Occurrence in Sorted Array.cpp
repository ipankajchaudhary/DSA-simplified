#include <bits/stdc++.h>
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
    int x;
    cin >> x;
    scan(a, n);
    bool flag = false;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > x)
        {
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
           if(mid == 0 || a[mid-1]!=a[mid])
           {
               cout << mid;
               flag = true;
               break;
           }
           else{
                high = mid - 1;
           }
        }
    }
    if (!flag)
    {
        cout << -1;
    }

    return 0;
}