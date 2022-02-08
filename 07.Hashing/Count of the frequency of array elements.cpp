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
void countfreq(int a[], int n)
{
    unordered_map<int, int> h;
    for(int i = 0;i<n;i++)
    {
        h[a[i]]++;
    }
    for(auto e: h)
    {
        cout << e.first << " " << e.second;
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    scan(a,n);
    countfreq(a, n);
    return 0;
}