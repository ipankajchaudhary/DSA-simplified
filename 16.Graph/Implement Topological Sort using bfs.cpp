vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ans;
	    vector<int> indegree(V,0);
	    for (int u = 0; u < V; u++) {
	        vector<int>::iterator itr;
            for (itr = adj[u].begin();
             itr != adj[u].end(); itr++)
            indegree[*itr]++;
        }
	    queue<int>q;
	    for(int i = 0;i<indegree.size();i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int u = q.front();
	        ans.push_back(u);
	        q.pop();
	        for(auto e:adj[u]){
	            if(--indegree[e] == 0){
	                q.push(e);
	            }
	        }
	    }
	    return ans;
	}
