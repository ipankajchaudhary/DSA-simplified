vector<int> countdistinctinwindows(vector<int> a, int k)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        m[a[i]]++;
    }
    ans.push_back(m.size());
    for (int i = k; i < a.size(); i++)
    {
        m[a[i - k]]--;
        if (m[a[i - k]] == 0)
        {
            m.erase(a[i - k]);
        }
        if (m.find(a[i]) == m.end())
        {
            m.insert({a[i], 1});
        }
        else
        {
            m[a[i]]++;
        }
        ans.push_back(m.size());
    }
    return ans;
}