int evalRPN(vector<string> &tokens)
{
    set<string> st;
    st.insert("+");
    st.insert("-");
    st.insert("*");
    st.insert("/");
    stack<int> s;
    for (int i = 0; i < tokens.size(); i++)
    {
        string x = tokens[i];
        if (st.find(x) == st.end())
        {
            s.push(stoi(x));
        }
        else
        {
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            if (x == "+")
                s.push(op1 + op2);
            if (x == "-")
                s.push(op2 - op1);
            if (x == "*")
                s.push(op1 * op2);
            if (x == "/")
                s.push(op2 / op1);
        }
    }
    return (s.top());
}
