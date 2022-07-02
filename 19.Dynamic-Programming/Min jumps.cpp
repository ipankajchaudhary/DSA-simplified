
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1e8);
        dp[0]= 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<i;j++){
                if(i-j<=nums[j]){
                    dp[i] = min(dp[i],1+dp[j]);
                }
            }
        }
        return dp[n-1];
    }