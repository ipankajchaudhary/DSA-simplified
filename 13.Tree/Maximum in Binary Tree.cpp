int getmax(Node *root){
    if(!root) return 0;
    else {
        return max(root->val, max(getmax(root->left), getmax(root->right)));
    }
}