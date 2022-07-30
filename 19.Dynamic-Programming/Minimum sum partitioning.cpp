/* Minimum sum partition

Given an array arr of size N containing non-negative integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference


Example 1:

Input: N = 4, arr[] = {1, 6, 11, 5} 
Output: 1
Explanation: 
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11   */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    vector<bool> isSubsetSum(int arr[], int sum, int n){
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = true;
        }
        for(int i=1; i<=sum; i++)
        {
            dp[0][i] = false;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n];
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
        }
        vector<bool> dp = isSubsetSum(arr,sum,n);
       
        int ans = 1e8;
       for (int j = 0; j<=sum/2; j++) 
       {
           int first=j;
           int second=sum-j;
            if (dp[j] == true && ans>abs(first-second)) 
            {
                ans=abs(first-second);
            }
        }
        return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends