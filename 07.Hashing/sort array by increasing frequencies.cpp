static bool mycmp(pair<int, int> &a,
                  pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return b.first < a.first;
    }
    return a.second < b.second;
}
vector<int> frequencySort(vector<int> &nums)
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
    for (int i = 0; i < p.size(); i++)
    {
        int j = p[i].second;
        while (j--)
        {
            ans.push_back(p[i].first);
        }
    }
    return ans;
}