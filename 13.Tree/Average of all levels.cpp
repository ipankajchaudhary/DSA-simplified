vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> q;
        vector<double>ans;
        q.push(root);
        while(!q.empty())
        {
            long long int s = 0;
            long long int x = q.size();
            for(int i = 0;i<x;i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                s+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            double d = (double)(double(s)/double(x));
            ans.push_back(d);
        }
        return ans;
    }