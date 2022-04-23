int coinChange(vector<int> &coins, int sum)
{
    int n = coins.size();
    int dp[sum + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i][j - 1];
            if (coins[j - 1] <= i)
            {
                dp[i][j] += dp[i - coins[j - 1]][j];
            }
        }
    }
    for (int i = 0; i <= sum; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    return dp[sum][n];
}