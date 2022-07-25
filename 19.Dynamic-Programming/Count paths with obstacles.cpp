/*You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m-1][n-1]). The robot can only move either down or right at any point in time.

An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.

Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The testcases are generated so that the answer will be less than or equal to 2 * 109

Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right */

int f(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &g)
{
    if (i >= 0 && j >= 0 && g[i][j] == 1)
    {
        return 0;
    }
    if (i == 0 && j == 0)
    {
        return 1;
    }
    if (i < 0 || j < 0)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int up = f(i - 1, j, dp, g);
    int left = f(i, j - 1, dp, g);
    return dp[i][j] = left + up;
}
int uniquePathsWithObstacles(vector<vector<int>> &g)
{
    int m = g.size();
    int n = g[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            if(g[i][j] == 1){
                dp[i][j] = 0;
                continue;
            }
            if(i == 0 && j == 0){
                dp[i][j] = 0;
                continue;
            }
            int up = 0, left = 0;
            if(i-1>=0)
                up = dp[i - 1][j];
            if(j-1>=0)
                left = dp[i][j - 1];
            dp[i][j] = left + up;
        }
    }
    return dp[m - 1][n - 1];
}