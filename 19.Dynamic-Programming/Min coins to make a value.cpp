
int coinChange(vector<int> &coins, int sum)
{
    int n = coins.size();
    int dp[sum + 1];
    dp[0] = 0;
    for (int i = 1; i <= sum; i++)
    {
        dp[i] = INT_MAX;
    }
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i)
            {
                int sub_res = dp[i - coins[j]];
                if (sub_res != INT_MAX)
                {
                    dp[i] = min(dp[i], sub_res + 1);
                }
            }
        }
    }
    if (dp[sum] == INT_MAX)
    {
        return -1;
    }
    return dp[sum];
}
