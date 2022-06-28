// Given a string str and Q queries. Every query consists of two numbers L and R. The task is to print if the sub-string[L…R] is palindrome or not.

// Examples:

// Input: str = “abacccde”, Q[][] = {{0, 2}, {1, 2}, {2, 4}, {3, 5}}
// Output:
// Yes
// No
// No
// Yes

// Input: str = “abaaab”, Q[][] = {{0, 1}, {1, 5}}
// Output:
// No
// Yes

// a sub string (l,r) is palindrome if substring(l+1,r-1) is palindrome provided with s[l] == s[r]

// so dp[i][j] = (dp[i+1][j-1] && (s[l] == s[r]));

bool isPalindrome(string s, int l, int r)
{
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    bool dp[s.length()][s.length()];

    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            dp[i][j] = false;
            if (i == j)
            {
                dp[i][j] = true;
            }
        }
    }

    int n = s.length();
    for (int l = 2; l <= n; l++)
    {
        for (int i = 0; i + l <= n; i++)
        {
            int j = i + l - 1;
            if (s[i] == s[j])
            {
                if (j == i + 1 || dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                }
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        cout << dp[l][r] << "\n";
    }
}