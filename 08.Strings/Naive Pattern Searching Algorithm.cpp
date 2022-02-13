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
    int n, m;
    cin >> n >> m;
    string t, p;
    cin >> t >> p;
    for (int i = 0; i < n - m + 1; i++)
    {
        int j = 0;
        for (; j < m; j++)
        {
            if (t[i + j] != p[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }

    return 0;
}