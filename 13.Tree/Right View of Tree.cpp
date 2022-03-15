
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode *>q;
        q.push(root);
        vector<int> v;
        while(!q.empty()){
            int x = q.size();
            for(int i = 0;i<x;i++){
                TreeNode *curr = q.front();
                q.pop();
                if(i == x-1){
                    v.push_back(curr->val);
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
                
        }
        return v;
    }
