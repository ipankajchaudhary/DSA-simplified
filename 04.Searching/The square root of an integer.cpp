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
int findsqrt(int x)
{
    int low = 0, high = x;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mdsqr = mid * mid;
        if (mdsqr == x)
        {
            return mid;
        }
        else if (mdsqr > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
    // if (!flag)
    // {
        // cout << -1;
    // }
}
int main()
{
    int x;
    cin >> x;
    cout<<findsqrt(x);
    return 0;
}