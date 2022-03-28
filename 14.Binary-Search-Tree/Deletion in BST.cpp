TreeNode* getSuccessor(TreeNode *curr){
        curr = curr->right;
        while(curr!=NULL && curr->left!=NULL){
            curr = curr->left;
        }
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int x) {
        if(root == NULL){
            return root;
        }
        if(root->val > x){
            root->left = deleteNode(root->left,x);
        }
        else if(root->val < x){
            root->right = deleteNode(root->right,x);
        }
        else{
            if(root->left == NULL){
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            if(root->right == NULL){
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            else{
                TreeNode *succ = getSuccessor(root);
                root->val = succ->val;
                root->right = deleteNode(root->right,succ->val);
            }
        }
        return root;
    }
