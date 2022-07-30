/*Partition Equal Subset Sum
Medium

8325

133

Add to List

Share
Given a non-empty array nums containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

 

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets. */

class Solution {
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>> dp(arr.size(), vector<int>(sum + 1, false));
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
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto e:nums){
            sum += e;
        }
        if(sum % 2 != 0){
            return false;
        }
        return isSubsetSum(nums,sum/2);
    }
};