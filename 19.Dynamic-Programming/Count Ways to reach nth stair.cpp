// There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

int f(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int x = countWays(n - 1);
    int y = countWays(n - 2);
    return dp[n] = x + y;
}
int countWays(int n)
{
    vector<int> dp(n + 1, -1);
    // return f(n,dp);
    long long int mod = 1e9 + 7;
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod) % mod;
    }
    return dp[n] % mod;
}