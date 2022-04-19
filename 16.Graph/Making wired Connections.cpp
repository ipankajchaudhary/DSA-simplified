void bfs(vector<int> adj[], vector<bool> &visited, int s){
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto e:adj[u]){
                if(visited[e] == false){
                    q.push(e);
                    visited[e] = true;
                }
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        if(c.size() < n-1){
            return -1;
        }
        vector<int> adj[n];
        for(int i = 0;i<c.size();i++){
            adj[c[i][1]].push_back(c[i][0]);   
            adj[c[i][0]].push_back(c[i][1]);
        }
        vector<bool>visited(n,false);
        int count = -1;
        for(int i = 0;i<n;i++){
            if(visited[i] == false){
                bfs(adj,visited,i);
                count++;
            }
        }
        return count;
    }