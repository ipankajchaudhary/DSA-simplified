int res = 0;
    int helper(TreeNode* root) {
        if(!root) return 0;
        int lh = helper(root->left);
        int rh = helper(root->right);
        res = max(res,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x = helper(root);
        return res;
    }