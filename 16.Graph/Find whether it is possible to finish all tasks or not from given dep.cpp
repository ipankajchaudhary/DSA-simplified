bool isPossible(int n, vector<pair<int, int>> &pre)
{
    vector<int> adj[n];
    for (int i = 0; i < pre.size(); i++)
    {
        adj[pre[i].second].push_back(pre[i].first);
    }
    vector<int> indegree(n, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int>::iterator itr;
        for (itr = adj[i].begin(); itr != adj[i].end(); itr++)
        {
            indegree[*itr]++;
        }
    }
    int count = 0;
    queue<int> q;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto e : adj[u])
        {
            if (--indegree[e] == 0)
            {
                q.push(e);
            }
        }
        count++;
    }
    return count == n;
}