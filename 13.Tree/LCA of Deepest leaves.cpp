TreeNode* lcaDeepestLeaves(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        vector<TreeNode*>v;
        unordered_map<TreeNode*,TreeNode*>mp;
        while(q.empty() == false){
            int x = q.size();
            vector<TreeNode*>w(x);
            for(int i = 0;i<x;i++){
                TreeNode *curr = q.front();
                q.pop();
                w[i] = curr;
                if(curr->left){
                    q.push(curr->left);
                    mp[curr->left] = curr;
                }
                if(curr->right){
                    q.push(curr->right);
                    mp[curr->right] = curr;
                }
            }
            v = w;
        }
        if(v.size() == 1){
            return v[0];
        }
        else{
            while(true){
                bool notsame = false;
                for(int i = 1;i<v.size();i++){
                    if(v[i]!=v[0]){
                        notsame = true;
                        break;
                    }
                }
                if(notsame == false){
                    return v[0];
                }
                else{
                    for(int i = 0;i<v.size();i++){
                        v[i] = mp[v[i]];
                    }
                }
            }
        }
    }
