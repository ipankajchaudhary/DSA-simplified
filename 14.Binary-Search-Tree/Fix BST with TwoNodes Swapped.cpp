    TreeNode *prev = NULL, *first =  NULL, *second = NULL;
    void helper(TreeNode *root){
        if(root == NULL){
            return;
        }
        helper(root->left);
        if(prev != NULL && root->val < prev->val){
            if(first == NULL){
                first = prev;
            }
            second = root;
        }
        prev = root;
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        swap(first->val,second->val);
    }
