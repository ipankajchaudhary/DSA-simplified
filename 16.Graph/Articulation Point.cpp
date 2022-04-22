void DFS(int u,vector<int>& disc,vector<int>& low,vector<int>& parent,vector<bool>& articulation_Point)
{
	static int time = 0;
	disc[u] = low[u] = time;
	time+=1;
	int children = 0;

	for(int v: adj[u])
	{
		if(disc[v]==-1)	//If v is not visited
		{
			children += 1;
			parent[v] = u;
			DFS(v,disc,low,parent,articulation_Point);
			low[u] = min(low[u],low[v]);

			if(parent[u]==-1 and children>1)	//Case-1: U is root
				articulation_Point[u] = true;

			if(parent[u]!=-1 and low[v]>=disc[u])	//Case-2: Atleast 1 component will get separated
				articulation_Point[u] = true;
		}
		else if(v!=parent[u])	//Ignore child to parent edge
			low[u] = min(low[u],disc[v]);
	}	
}

void findAPs_Tarjan()
{
	vector<int> disc(V,-1),low(V,-1),parent(V,-1);
	vector<bool> articulation_Point(V,false);	//Avoids cross-edge

	for(int i=0;i<V;++i)
		if(disc[i]==-1)
			DFS(i,disc,low,parent,articulation_Point);

	cout<<"Articulation Points are: ";
	for(int i=0;i<V;++i)
		if(articulation_Point[i]==true)
			cout<<i<<" ";
}
