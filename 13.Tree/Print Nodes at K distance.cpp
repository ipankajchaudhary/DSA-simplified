vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
        if(!root) return {};
        int j = 0;
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
                if(k == j)
                    ans.push_back(curr->data);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            j++;
        }
        return ans;
    
}