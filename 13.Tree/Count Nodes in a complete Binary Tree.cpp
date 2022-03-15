int countNodes(TreeNode* root) {
        if(!root) return 0;
        TreeNode *l = root;
        int lh = 0;
        while(l){
            l = l->left;
            lh++;
        }
        TreeNode *r = root;
        int rh = 0;
        while(r){
            r = r->right;
            rh++;
        }
        if(lh == rh) return pow(2,lh)-1;
        return 1+ countNodes(root->left) + countNodes(root->right);
        
    }
