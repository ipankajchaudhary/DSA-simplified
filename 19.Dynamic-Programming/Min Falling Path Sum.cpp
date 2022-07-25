/*Given an n x n array of integers matrix, return the minimum sum of any falling path through matrix.

A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1).



Example 1:


Input: matrix = [[2,1,3],[6,5,4],[7,8,9]]
Output: 13
*/

// Memoization

int f(int i, int j, vector<vector<int>> &dp, int n, vector<vector<int>> &m)
{
    if (i == n)
    {
        return 0;
    }
    if (j < 0 || j >= n || i < 0 || i >= n)
    {
        return 1e9;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int a = m[i][j] + f(i + 1, j - 1, dp, n, m);
    int b = m[i][j] + f(i + 1, j, dp, n, m);
    int c = m[i][j] + f(i + 1, j + 1, dp, n, m);
    return dp[i][j] = min(min(a, b), c);
}
int minFallingPathSum(vector<vector<int>> &m)
{
    vector<vector<int>> dp(m.size(), vector<int>(m.size(), -1));
    int res = INT_MAX;
    int n = m.size();
    for (int i = 0; i < n; i++)
    {
        f(0, i, dp, n, m);
    }
    for (int i = 0; i < m.size(); i++)
    {
        res = min(res, dp[0][i]);
    }
    return res;
}

// Tabulation

int minFallingPathSum(vector<vector<int>> &m)
{
    vector<vector<int>> dp(m.size(), vector<int>(m.size(), -1));
    int res = INT_MAX;
    int n = m.size();
    for (int i = 0; i < n; i++)
    {
        f(0, i, dp, n, m);
    }
    for (int i = 0; i < m.size(); i++)
    {
        res = min(res, dp[0][i]);
    }
    return res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a = m[i][j];
            if (i - 1 >= 0 && i - 1 < n && j + 1 < n)
            {
                a += dp[i - 1][j + 1];
            }
            else
            {
                a += 1e9;
            }
            int b = m[i][j];
            if (i + 1 < n)
            {
                b += dp[i + 1][j];
            }
            else
            {
                b += 1e9;
            }
            int c = m[i][j];
            if (i + 1 >= 0 && i + 1 < n && j + 1 < n)
            {
                c += dp[i + 1][j + 1];
            }
            else
            {
                c += 1e9;
            }
            dp[i][j] = min(min(a, b), c);
        }
    }
    int mn = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        mn = min(mn, dp[n - 1][j]);
    }
    return mn;
}