#include<bits/stdc++.h>
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
cout<<A[i]<<' ';
}
}
int main()
{
    string s, t;
    cin >> s >> t;
    int count[256] = {0};
    for (int i = 0; i < s.length();i++)
    {
        count[s[i]]++;
        count[t[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            cout << "False";
        }
    }
    cout << "TRUE";

    return 0;
}