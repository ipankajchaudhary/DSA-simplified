bool bfs(vector<int> adj[], vector<int> &color, int s)
{
    queue<int> q;
    q.push(s);
    color[s] = 1; // color the source with 1
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (auto e : adj[u])
        {
            if (color[e] == -1) // if adjacent of current node is not colored, color it with opposite
            {
                color[e] = 1 - color[u];
                q.push(e);
            }
            else if (color[e] == color[u]) //  else if adjacent is already colored, then check whether they are of same color or not
            {
                return false;
            }
        }
    }
    return true;
}
bool isBipartite(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> adj[n];
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++)
    {
        for (auto j : graph[i])
        {
            adj[i].push_back(j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!bfs(adj, color, i))
            {
                return false;
            }
        }
    }
    return true;
}
