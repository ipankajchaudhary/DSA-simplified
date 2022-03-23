int count = 0;
    int ans = 0;
    void helper(TreeNode* root, int k) {
        if(root){
            helper(root->left,k);
            count++;
            if(count==k){
                ans = root->val;
                return;
            }
            helper(root->right,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return ans;
    }
