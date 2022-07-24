
int f(int n, vector<int> &arr,vector<int> &dp){
    if(n == 0){
        return arr[n];
    }
    if(n < 0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int pick = f(n - 2) + arr[n];
    int notpick = f(n - 1);
    return dp[n] = max(pick,notpick);
}
int frogJump(int n, vector<int> &arr)
{
    vector<int> dp(n+1,0);
    
    dp[0] = arr[0];
    for(int i = 1;i<n;i++){
        int pick = arr[i];
        if(i -2 >= 0)
            pick += dp[i - 2];
        int notpick = dp[i - 1];
        dp[i] = max(pick, notpick);
    }
    return dp[n-1];
//     return 
}