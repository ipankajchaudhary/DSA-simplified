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
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i<s.length() && j<t.length())
    {
        if(s[i] == t[j])
        {
            j++;
        }
        i++;
    }
    (j == t.length()) ? cout << "YES" :
                             cout<< "NO";
    return 0;
}