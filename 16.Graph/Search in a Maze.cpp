// RAT IN A MAZE
class Solution{
    public:
    vector<string> v;
    void dfs(int i, int j, string s,vector<vector<int>> m,vector<vector<int>> &vis, int n){
        if(i<0 || j<0 || i>=n || j>=n){
            return;
        }
        if(m[i][j] == 0 || vis[i][j] == 1){
            return;
        }
        if(i==n-1 && j==n-1){
            v.push_back(s);
            return;
        }
        vis[i][j] = 1;
        dfs(i,j+1,s+'R',m,vis,n);
        dfs(i,j-1,s+'L',m,vis,n);
        dfs(i-1,j,s+'U',m,vis,n);
        dfs(i+1,j,s+'D',m,vis,n);
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        v.clear();
        if(m[0][0] == 0 || m[n-1][n-1] == 0){
            return v;
        }
        vector<vector<int> > vis( n , vector<int> (n, 0));
        
        dfs(0,0,"",m,vis,n);
        sort(v.begin(),v.end());
        return v;
    }
};