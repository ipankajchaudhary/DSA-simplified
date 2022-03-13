void help(Node * root , vector<int>&ans)
    {
        if(root == NULL)return ;
        ans.push_back(root->data);
        help(root->left , ans);
        help(root->right,ans);
        
    }
vector <int> preorder(Node* root)
{
        vector<int>ans;
        help(root,ans);
        return ans;
}