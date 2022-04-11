const int N = 1e5 + 10;
const int INF = 1e9 + 10;
int dijkistra(vector<pair<int, int>> adj[], int s, int n)
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);
    set<pair<int, int>> st;
    st.insert({0, s});
    // vis[s] = 1;
    dist[s] = 0;
    while (st.size() > 0)
    {
        auto u = *st.begin();
        int wt = u.first;
        int node = u.second;
        st.erase(st.begin());
        if (vis[node])
            continue;
        vis[node] = 1;
        for (auto v : adj[node])
        {
            int child = v.first;
            int w = v.second;
            if (dist[node] + w < dist[child])
            {
                dist[child] = dist[node] + w;
                st.insert({dist[child], child});
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            return -1;
        ans = max(ans, dist[i]);
    }

    return ans;
}