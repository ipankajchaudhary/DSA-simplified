
int longestValidParentheses(string s)
{
    if (s.size() < 1)
    {
        return 0;
    }
    stack<int> st;
    int n = s.length();
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
            dp[i] = 0;
        }
        else
        {
            if (st.empty())
            {
                dp[i] = 0;
            }
            else
            {
                if (st.top() - 1 >= 0)
                {
                    dp[i] = i - st.top() + 1 + dp[st.top() - 1];
                }
                else
                {
                    dp[i] = i - st.top() + 1;
                }
                st.pop();
            }
        }
    }
    int ans = *max_element(dp.begin(), dp.end());
    return ans;
}
