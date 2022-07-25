/*Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.



Example 1:

Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above). */

int f(int i, int j, vector<vector<int>> &t, vector<vector<int>> &dp, int n)
{
    if (i == n - 1)
    {
        return t[i][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int d = f(i + 1, j, t, dp, n) + t[i][j];
    int dg = f(i + 1, j + 1, t, dp, n) + t[i][j];
    return dp[i][j] = min(d, dg);
}
int minimumTotal(vector<vector<int>> &t)
{
    int n = t.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (i == n - 1)
            {
                dp[i][j] = t[i][j];
                continue;
            }
            int d = t[i][j];
            if (i + 1 >= 0)
            {
                d += dp[i + 1][j];
            }
            else
            {
                d += 1e9;
            }
            int dg = t[i][j];
            if (i + 1 >= 0 && j + 1 >= 0)
            {
                dg += dp[i + 1][j + 1];
            }
            else
            {
                dg += 1e9;
            }
            dp[i][j] = min(d, dg);
        }
    }
    return dp[0][0];
}