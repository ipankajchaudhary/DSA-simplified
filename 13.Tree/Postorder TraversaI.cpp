void help(Node * root , vector<int>&ans)
    {
        if(root == NULL)return ;
        help(root->left , ans);
        help(root->right,ans);
        ans.push_back(root->data);
        
    }
vector <int> postOrder(Node* root)
{
        vector<int>ans;
        help(root,ans);
        return ans;
}