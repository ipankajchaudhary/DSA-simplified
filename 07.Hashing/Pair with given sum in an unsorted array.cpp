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
bool findpair(int a[], int n, int x)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(x-a[i]) !=s.end())
        {
            return true;
        }
        s.insert(a[i]);
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
    cout << findpair(a, n, x);

    return 0;
}