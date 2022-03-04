
char solve(stack<char> &st)
{
    bool TrueFlag = false;
    bool FalseFlag = false;
    while (st.top() != '&' and st.top() != '!' and st.top() != '|')
    {
        if (st.top() == 't')
            TrueFlag = true;
        else
            FalseFlag = true;
        st.pop();
    }
    char op = st.top();
    st.pop();
    if (op == '&')
        if (!FalseFlag)
            return 't';
    if (op == '|')
        if (TrueFlag)
            return 't';
    if (op == '!')
        if (FalseFlag)
            return 't';
    return 'f';
}
bool parseBoolExpr(string expression)
{
    stack<char> st;
    for (auto x : expression)
    {
        if (x != '(' and x != ')' and x != ',')
        {
            st.push(x);
        }
        if (x == ')')
        {
            char exp = solve(st);
            st.push(exp);
        }
    }
    return st.top() == 't' ? true : false;
}
