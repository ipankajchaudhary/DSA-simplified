/*Ninjaland is a country in the shape of a 2-Dimensional grid 'GRID', with 'N' rows and 'M' columns. Each point in the grid has some cost associated with it.
Find a path from top left i.e. (0, 0) to the bottom right i.e. ('N' - 1, 'M' - 1) which minimizes the sum of the cost of all the numbers along the path. You need to tell the minimum sum of that path.

Sample Input 1:

2 3
5 9 6
11 5 2

Sample Output 1:
21
*/

int f(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
    {
        return grid[0][0];
    }
    if (i < 0 || j < 0)
    {
        return 1e9;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int up = f(i - 1, j, grid, dp) + grid[i][j];
    int left = f(i, j - 1, grid, dp)+ grid[i][j];
    return dp[i][j] = min(up, left);
}

int minSumPath(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = grid[0][0];
                continue;
            }
            int up =  grid[i][j];
            if(i-1 >= 0){
                up += dp[i - 1][j];
            }
            else{
                up += 1e9;
            }
            int left = grid[i][j];
            if(j-1 >= 0){
                left += dp[i][j - 1];
            }
            else{
                left += 1e9;
            }
            dp[i][j] = min(up, left);
        }
    }

    return dp[m-1][n-1];
}