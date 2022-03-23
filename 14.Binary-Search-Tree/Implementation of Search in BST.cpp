    TreeNode* searchBST(TreeNode* root, int val) {
        if(root!=NULL){
            if(root->val > val){
                return searchBST(root->left,val);
            }
            else if(root->val < val){
                return searchBST(root->right,val);
            }
            else{
                return root;
            }
        }
        else{
            return root;
        }
    }
