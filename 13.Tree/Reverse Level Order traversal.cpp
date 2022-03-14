vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode *> q;
        vector<vector<int>>ans;
        q.push(root);
        while(!q.empty())
        {
           vector<int>s;
            long long int x = q.size();
            for(int i = 0;i<x;i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                
                s.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(s);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }