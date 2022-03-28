void dfs(vector<int> adj[], int s, vector<int> &res, vector<bool> &visited)
{
    visited[s] = true;
    res.push_back(s);
    for (int u : adj[s])
    {
        if (!visited[u])
        {
            dfs(adj, u, res, visited);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    vector<int> res;
    dfs(adj, 0, res, visited);
    return res;
}