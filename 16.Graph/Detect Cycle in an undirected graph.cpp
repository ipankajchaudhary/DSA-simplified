bool DFS(vector<int> adj[], int s, vector<bool> visited, int parent)
{
    visited[s] = true;
    for (auto u : adj[s])
    {
        if (visited[u] == false)
        {
            if (DFS(adj, u, visited, s) == true)
            {
                return true;
            }
        }
        else
        {
            if (u != parent)
            {
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (DFS(adj, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}