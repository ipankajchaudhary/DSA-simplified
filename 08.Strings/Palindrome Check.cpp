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
bool check(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev == s;
}
int main()
{
    string s;
    cin >> s;
    cout << check(s);
    return 0;
}