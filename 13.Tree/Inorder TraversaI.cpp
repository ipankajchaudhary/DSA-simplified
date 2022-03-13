void help(Node * root , vector<int>&ans)
    {
        if(root == NULL)return ;
        help(root->left , ans);
        ans.push_back(root->data);
        help(root->right,ans);
        
    }
    
   
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        help(root,ans);
        return ans;
    }