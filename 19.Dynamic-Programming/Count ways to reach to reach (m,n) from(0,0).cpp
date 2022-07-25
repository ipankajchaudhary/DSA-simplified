/*Given two values M and N, which represent a matrix[M][N]. We need to find the total unique paths from the top-left cell (matrix[0][0]) to the rightmost cell (matrix[M-1][N-1]).

M = 3, N = 2
O/P = 3 */

int f(int i, int j, vector<vector<int>> &dp ){
    if(i == 0 && j == 0){
        return 1;
    }
    if(i<0 || j < 0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up = f(i - 1, j,dp);
    int left = f(i, j - 1,dp);
    return dp[i][j] = left + up;
}
int countways(int m, int n){
    vector<vector<int>> dp(m, vector<int>(n, -1));
    dp[0][0] = 1;
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
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
    return dp[m-1][n-1];
}