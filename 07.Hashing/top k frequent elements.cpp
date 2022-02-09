static bool mycmp(pair<int, int> &a,
                  pair<int, int> &b)
{
    return a.second > b.second;
}
vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    vector<int> ans;
    vector<pair<int, int>> p;
    for (auto &e : m)
    {
        p.push_back(e);
    }
    sort(p.begin(), p.end(), mycmp);
    for (int i = 0; i < k; i++)
    {
        ans.push_back(p[i].first);
    }
    return ans;
}