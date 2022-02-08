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
bool issum(int a[], int n,int x)
{
    unordered_set<int>s;
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if(s.find(pre-x)!=s.end())
        {
            return true;
        }
        if(pre == x)
        {
            return true;
        }
        s.insert(pre);
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    scan(a,n);
    int x;
    cin >> x;
    cout << issum(a, n, x);
    return 0;
}