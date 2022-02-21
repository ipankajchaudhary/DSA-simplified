bool matching(char a, char b)
{
    return ((a == '(' && b == ')') ||
            (a == '{' && b == '}') ||
            (a == '[' && b == ']'));
}
bool ispar(string x)
{
    stack<char> s;
    for (auto e : x)
    {
        if (e == '(' || e == '{' || e == '[')
            s.push(e);
        else
        {
            if (s.empty())
                return false;
            else if ((matching(s.top(), e)) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}