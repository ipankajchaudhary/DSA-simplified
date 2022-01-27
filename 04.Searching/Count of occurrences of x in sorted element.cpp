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
vector<int> find(int a[], int n, int x)
{
    vector<int> ans;
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
            if (mid == 0 || a[mid - 1] != a[mid])
            {
                ans.push_back(mid);
                flag = true;
                break;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (!flag)
    {
        ans.push_back(-1);
    }
    flag = false;
    low = 0, high = n - 1;
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
            if (mid == n - 1 || a[mid] != a[mid + 1])
            {
                ans.push_back(mid);
                flag = true;
                break;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (!flag)
    {
        ans.push_back(-1);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int x;
    cin >> x;
    scan(a, n);
    vector<int> ans = find(a, n, x);
    if(ans[0] == -1)
    {
        cout << 0;
    }
    else
    {
        cout << ans[1] - ans[0] + 1;
    }
    return 0;
}