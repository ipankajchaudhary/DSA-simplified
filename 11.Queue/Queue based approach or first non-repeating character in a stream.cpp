string FirstNonRepeating(string s)
{
    int n = s.size();
    unordered_map<char, int> map;
    string ans = "";
    queue<char> q;
    for (int i = 0; i < n; i++)
    {
        if (!map[s[i]])
            q.push(s[i]);
        map[s[i]]++;
        while (!q.empty() && map[q.front()] > 1)
            q.pop();
        if (q.empty())
            ans += "#";
        else
            ans += q.front();
    }
    return ans;
}