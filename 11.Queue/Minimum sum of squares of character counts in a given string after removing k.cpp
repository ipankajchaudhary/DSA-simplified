int minValue(string s, int k)
{
    unordered_map<char, int> mp;
    for (auto e : s)
    {
        mp[e]++;
    }
    priority_queue<int> pq;
    for (auto e : mp)
    {
        pq.push(e.second);
    }
    while (k > 0)
    {
        int x = pq.top();
        pq.pop();
        x -= 1;
        k--;
        pq.push(x);
    }
    int ans = 0;
    while (!pq.empty())
    {
        int x = pq.top();
        // cout<<x<<"\n";
        pq.pop();
        ans += x * x;
    }
    return ans;
}