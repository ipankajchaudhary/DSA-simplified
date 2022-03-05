string reverseWords(string s)
{
    stack<char> st;
    string ans = "";
    for (auto e : s)
    {
        if (e != '.')
        {
            st.push(e);
        }
        else
        {
            string res = "";
            while (st.empty() == false)
            {
                res += st.top();
                st.pop();
            }
            ans += res;
            ans += '.';
        }
    }
    string res = "";
    while (st.empty() == false)
    {
        res += st.top();
        st.pop();
    }
    ans += res;
    return ans;
}