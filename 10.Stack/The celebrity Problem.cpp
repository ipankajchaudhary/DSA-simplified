int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    int x = 0;
    while (!(s.size() <= 1))
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (M[a][b] == 1)
            s.push(b);
        else
            s.push(a);
    }
    int ans = s.top();
    bool rowcheck = false;
    int zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0)
            zeroes++;
    }
    if (zeroes == n)
        rowcheck = true;
    bool colcheck = false;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
        {
            ones++;
        }
    }
    if (ones == n - 1)
        colcheck = true;
    if (rowcheck && colcheck)
        return ans;
    else
        return -1;
}