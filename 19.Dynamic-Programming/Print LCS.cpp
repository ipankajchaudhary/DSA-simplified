string lcs(string a, string b){
    string res = "";
 
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        // If this cell is same as diagonally
        // adjacent cell just above it, then
        // same characters are present at
        // str[i-1] and str[j-1]. Append any
        // of them to result.
        if (dp[i][j] == dp[i-1][j-1] + 1)
        {
           res = res + a[i-1];
           i--;
           j--;
        }
 
        // Otherwise we move to the side
        // that that gave us maximum result
        else if (dp[i][j] == dp[i-1][j])
            i--;
        else
            j--;
    }
 
    // Since we traverse dp[][] from bottom,
    // we get result in reverse order.
    reverse(res.begin(), res.end());
 
    return res;
}