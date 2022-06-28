// Given n wines in a row, with integers denoting the cost of each wine respectively. Each year you can sell the first or the last wine in the row. Let the initial profits from the wines be P1, P2, P3…Pn. In the Yth year, the profit from the ith wine will be Y*P[i]. The goal is to calculate the maximum profit that can be earned by selling all the wines.

// Input: Price of wines: 2 4 6 2 5
// Output: 64
// The initial thought would be to go greedy, that is, check both the ends and sell the cheaper wine every time. If we do it greedy way,

// price = 1*2 = 2, remaining wines = [ 4, 6, 2, 5 ], Profit = 2
// price = 2*4 = 8, remaining wines = [ 6, 2, 5 ], Profit = 10
// price = 3*5 = 15, remaining wines = [ 6, 2 ], Profit = 25
// price = 4*2 = 8, remaining wines = [ 6 ], Profit = 33
// price = 5*6 = 30, remaining wines = [ ], Profit = 63
// This is wrong since the output is 64
// Correct :

// price = 1*2 = 2, remaining wines = [ 4, 6, 2, 5 ], Profit = 2
// price = 2*5 = 10, remaining wines = [ 4, 6, 2 ], Profit = 12
// price = 3*2 = 6, remaining wines = [ 4, 6], Profit = 18
// price = 4*4 = 16, remaining wines = [ 6 ], Profit = 34
// price = 5*6 = 30, remaining wines = [ ], Profit = 64

// Approach - 
// profit(i,j) = max((price[i]*y + profit(i+1,j)) , (price[j]*y + profit(i,j-1)))


// Recursive

int solve(int price[], int i, int j, int year){
    if(i > j){
        return 0;
    }
    int op1 = price[i] * year + solve(price, i + 1, j, year + 1);
    int op2 = price[j] * year + solve(price, i, j-1, year + 1);
    return max(op1, op2);
}
int maxProfit(int prices[], int n){
    return solve(prices, 0, n - 1, 1);
}

// DP solution

int solve(int price[], int i, int j, int year, int dp[][]){
    if(i>j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int op1 = price[i] * year + solve(price, i + 1, j, year + 1, dp);
    int op2 = price[j] * year + solve(price, i, j-1, year + 1, dp);
    return dp[i][j] = max(op1, op2);
}

int maxProfit(int price[], int n)
{
    memset(dp,-1,sizeof(dp));
    return solve(price,0,n-1,1);
}