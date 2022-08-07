/*Given an array arr[] of length N and an integer X, the task is to find the number of subsets with a sum equal to X.

Examples: 

Input: arr[] = {1, 2, 3, 3}, X = 6 
Output: 3 
All the possible subsets are {1, 2, 3}, 
{1, 2, 3} and {3, 3}

Input: arr[] = {1, 1, 1, 1}, X = 1 
Output: 4 */


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
        return dp[i][sum] = take + nottake;
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
                    dp[i][j] = 1;
                }
            }
        }
        for(int i = 1;i<n;i++){
            for(int j = 0;j<sum + 1;j++){
                bool nottake = dp[i-1][j];
                bool take = 0;
                if(j-arr[i] >= 0){
                    take = dp[i-1][j-arr[i]];
                }
                dp[i][j] = take + nottake;
            }
        }
        return dp[n-1][sum];
    }
};