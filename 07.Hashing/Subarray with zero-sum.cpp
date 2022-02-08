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
bool issumzero(int a[], int n)
{
    unordered_set<int>s;
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += a[i];
        if(s.find(pre)!=s.end())
        {
            return true;
        }
        if(pre == 0)
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
    cout << issumzero(a, n);
    return 0;
}