// There's a scientist named Brook who is interested in budding of cells. He has one container which initially contains only a single cell. Now Brook wants n number of cells in his container. So he can change the number of cells in container in 3 different ways -:

// Double the number of cells present in the container.

// Increase the number of cells in the container by 1.

// Decrease the number of cells in the container by 1.

// Now, all the above operations have different costs associated with them x,y,z respectively for above operations. Help brook in finding the minimum cost to generate n cells in the container starting from one cell .

int solve(int x,int y, int z, int n){
    int MinCost[n+1];

    MinCost[0]=0;
    MinCost[1]=0;
    MinCost[2]=min(y,x);
    for(int i=3;i<=n;i++){
        MinCost[i]=MinCost[i-1]+y;
        if(i%2==0)MinCost[i]=min(MinCost[i/2]+x,MinCost[i]);
        else{
            MinCost[i]=min(MinCost[i],MinCost[(i+1)/2]+z+x);
        }
    }

    return MinCost[n];
}