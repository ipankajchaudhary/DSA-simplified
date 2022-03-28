vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(V, 0);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        bfs.push_back(u);
        for (auto e : adj[u])
        {
            if (!vis[e])
            {
                q.push(e);
                vis[e] = 1;
            }
        }
    }

    return bfs;
}