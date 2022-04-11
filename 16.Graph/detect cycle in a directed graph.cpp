bool dfs(vector<int>adj[],int s, vector<bool> visited, vector<bool>recst){
        visited[s] = true;
        recst[s] = true;
        for(auto u:adj[s]){
            if(visited[u] == false && dfs(adj,u,visited,recst)){
                return true;
            }
            else{
                if(recst[u] == true){
                    return true;
                }
            }
        }
        recst[s] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V,false);
        vector<bool> recst(V,false);
        for(int i = 0;i<V;i++){
            if(visited[i] == false){
                if(dfs(adj,i,visited,recst)){
                    return true;
                }            
            }
        }
        return false;
    }
