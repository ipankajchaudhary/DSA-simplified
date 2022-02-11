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
int main()
{
    string s;
    cin >> s;
    int INDEX[256];
    fill(INDEX, INDEX + 256, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length();i++)
    {
        int f = INDEX[s[i]];
        if(f == -1)
        {
            INDEX[s[i]] = i;
        }
        else{
            res = min(res, f);
        }
    }
    cout << (res == INT_MAX ? -1 : res);
    return 0;
}