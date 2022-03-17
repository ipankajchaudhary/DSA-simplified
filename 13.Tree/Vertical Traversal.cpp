 vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int> > >mp;
        queue<pair<TreeNode *,pair<int,int> > >q;
        q.push(make_pair(root,make_pair(0,0)));
        vector<vector<int>>v;
        while(!q.empty()){
            int x = q.size();
            for(int i = 0;i<x;i++){
                 pair<TreeNode*, pair<int,int> > t  = q.front();
                q.pop();
                int hd = t.second.first;
                int lv = t.second.second;
                TreeNode *curr = t.first;
                mp[hd][lv].push_back(curr->val);
                if(curr->left){
                    q.push(make_pair(curr->left,make_pair(hd-1,lv+1)));
                }
                if(curr->right){
                    q.push(make_pair(curr->right,make_pair(hd+1,lv+1)));
                }
                sort(mp[hd][lv].begin(),mp[hd][lv].end());
            }
        }
        for(auto e:mp){
            vector<int> res;
            for(auto i:e.second){
                for(auto j:i.second){
                   res.push_back(j);
                }
            } 
            v.push_back(res);
        }
        return v;
    }