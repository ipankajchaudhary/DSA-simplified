vector<int> shortestpath(vector<int> adj[], int s, int V){
    vector<int> dist(V, INT_MAX);
    vector<bool> visited(V, false);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto e:adj[u]){
            if(!visited[e]){
                visited[e] = true;
                dist[e] = dist[u] + 1;
                q.push(e);
            }
        }
    }
    return dist;
}