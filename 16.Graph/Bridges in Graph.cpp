class Solution {
public:
    vector<vector<int>> ans;
    void DFS(int u,vector<int>& disc,vector<int>& low,vector<int>& parent,vector<int> adj[])
    {   
        static int time = 0;

        disc[u] = low[u] = time;
        time+=1;
        int children = 0;

        for(int v: adj[u])
        {

            if(disc[v]==-1)
            {
                parent[v] = u;
                DFS(v,disc,low,parent,adj);
                low[u] = min(low[u],low[v]);

                if(low[v]>disc[u])	
                    ans.push_back({u,v});
            }
            else if(v!=parent[u])	
                low[u] = min(low[u],disc[v]);
        }	
    }
vector<vector<int>> bridges(int n, vector<int> adj[]) {
        vector<int> disc(n,-1);
        vector<int> low(n,-1);
        vector<int> parent(n,-1);
        for(int i=0;i<n;++i)
            if(disc[i]==-1)
                DFS(i,disc,low,parent,adj);
        return ans;
    }
};
