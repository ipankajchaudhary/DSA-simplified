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
int unionofarrays(int a[], int b[], int n, int m)
{
    unordered_set<int> s(a,a+n);
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    return res;
}
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n], b[n];
    scan(a,n);
    scan(b, m);
    cout << unionofarrays(a, b, n, m);
    return 0;
}