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
        cout << A[i] << ' ';
    }
}
int issum(int a[], int n)
{
    unordered_map<int,int>m;
    int pre = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if(pre == 0)
        {
            res = i + 1;
        }
        if(m.find(pre)==m.end())
        {
            m.insert({pre, i});
        }
        if(m.find(pre)!=m.end())
        {
            res = max(res, i - m[pre]);
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    scan(a,n);
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = -1;
        }
    }
    cout << issum(a, n);
    return 0;
}