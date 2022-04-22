	void addEdge(vector<int> adj[], int src, int dest)
    {
        adj[src].push_back(dest); 
    }
	void dfsrec(int src, stack<int> &st, vector<bool> &vis, vector<int> adj[]){
	    vis[src] = true;
	    for(auto e:adj[src]){
	        if(!vis[e]){
	            dfsrec(e,st,vis,adj);
	        }
	    }
	    st.push(src);
	}
	void dfs(vector<int> transpose[], int node, vector<bool> &vis){
	    vis[node] = true;
	    for(auto e:transpose[node]){
	        if(!vis[e]){
	            dfs(transpose,e,vis);
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> st;
        vector<bool> vis(V,false);
        for(int i = 0;i<V;i++){
            if(vis[i] == false){
                dfsrec(i,st,vis,adj);
            }
        }
        vector<int> transpose[V];
        for (int i = 0; i < V; i++){
            for (int j = 0; j < adj[i].size(); j++){
                addEdge(transpose, adj[i][j], i);
            }
            vis[i] = false;
        }
        
        int ans = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(vis[node] == false){
                ans++;
                dfs(transpose,node,vis);
            }
        }
        return ans;
    }
