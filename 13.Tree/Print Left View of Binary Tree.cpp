vector<int> leftView(Node *root)
{
   if(!root) return {};
        queue<Node *> q;
        vector<int>ans;
        q.push(root);
        while(!q.empty())
        {
            long long int x = q.size();
            for(int i = 0;i<x;i++)
            {
                Node *curr = q.front();
                q.pop();
                if(i == 0)
                    ans.push_back(curr->data);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return ans;
}
