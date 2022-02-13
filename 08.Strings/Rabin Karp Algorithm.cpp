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
void rabinkarp(string text, string pattern)
{
    int h = 1;
    int m = pattern.length();
    int n = text.length();
    int d = 256;
    int q = 101;
    for (int i = 0; i < m-1; i++)
    {
        h = (h * d) % q;
    }
    int p = 0, t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pattern[i]) % q;
        t = (t * d + text[i]) % q;
    }
    for (int i = 0; i <= n-m; i++)
    {
        // cout << p << " " << t;
        if(p == t)
        {
            bool flag = true;
            int j;
            for (j = 0; j < m; j++)
            {
                if (text[i+j] != pattern[j])
                {
                  flag = false;
                  break;
                }
            }
            
            if (j == m)
                cout<< i<<endl;
        }
        if(i<n-m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if(t<0)
            {
                t += q;
            }
        }
    }
    
    
}
int main()
{
    string text, pattern;
    cin >> text >> pattern;
    rabinkarp(text, pattern);

    return 0;
}