/*Subset Sum Problem
Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.


Example 1:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9. */

class Solution{   
public:
    bool solve(vector<int> arr, int i, int sum, vector<vector<int>>& dp){
        if(sum == 0){
            return true;
        }
        if(i == 0){
            return (arr[i] == sum);
        }
        if(dp[i][sum] != -1){
            return dp[i][sum];
        }
        bool nottake = solve(arr,i-1,sum,dp);
        bool take = false;
        if(sum-arr[i] >= 0){
            take = solve(arr,i-1,sum-arr[i], dp);
        }
        return dp[i][sum] = take || nottake;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(arr.size(), vector<int>(sum + 1, -1));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<=sum;j++){
                if(i == 0){
                    dp[i][j] = (arr[i] == j);
                }
                if(j == 0){
                    dp[i][j] = true;
                }
            }
        }
        for(int i = 1;i<n;i++){
            for(int j = 0;j<sum + 1;j++){
                bool nottake = dp[i-1][j];
                bool take = false;
                if(j-arr[i] >= 0){
                    take = dp[i-1][j-arr[i]];
                }
                dp[i][j] = take || nottake;
            }
        }
        return dp[n-1][sum];
    }
};