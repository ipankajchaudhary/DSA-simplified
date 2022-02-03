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
        cout << A[i];
    }
}
bool isfeasible(int A[], int n, int k, int ans)
{
    int req = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + A[i] > ans)
        {
            req++;
            sum = A[i];
        }
        else
        {
            sum += A[i];
        }
    }
    return req <= k;
}

int findPages(int A[], int N, int M)
{
    int high = accumulate(A, A + N, 0);
    int low = *max_element(A, A + N);
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isfeasible(A, N, M, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int A[n];
    scan(A, n);
    cout << findPages(A, n, m);

    return 0;
}