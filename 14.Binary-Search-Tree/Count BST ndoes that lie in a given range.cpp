int ans = 0;
    void helper(TreeNode *root, int low, int high){
        if(root == NULL){
            return;
        }
        if(root->val >= low && root->val <= high){
            ans += root->val;
        }
        helper(root->left,low,high);
        helper(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root,low,high);
        return ans;
    }
