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
    int x;
    cin >> x;
    scan(a, n);
    bool flag = false;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            cout << mid;
            flag = true;
            break;
        }
        if (a[mid] > a[low])
        {
            if(x>=a[low] && x<a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
           if(x>=a[mid] && x<a[high])
            {
                 low = mid + 1;
            }
            else
            {
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