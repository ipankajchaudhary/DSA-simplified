vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
{
    // Your code here
    vector<int> ans;
    map<int, int> m;
    for (int e : A1)
    {
        m[e]++;
    }
    for (int j = 0; j < M; j++)
    {
        int k = m[A2[j]];
        while (k--)
        {
            ans.push_back(A2[j]);
        }
        m.erase(A2[j]);
    }
    int aux = ans.size();
    for (auto e : m)
    {
        int k = e.second;
        while (k--)
        {
            ans.push_back(e.first);
        }
    }
    return ans;
}