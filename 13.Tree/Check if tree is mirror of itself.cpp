bool check(TreeNode *p, TreeNode *q){
        if((p == NULL && q!= NULL) || (p!= NULL && q == NULL)) return false;
        if((p&&q) && (p->val != q->val)) return false;
        if(!p && !q) return true;
        bool t = check(p->left,q->right);
        bool u = check(p->right,q->left);
        return t&&u;
    }
    bool isSymmetric(TreeNode* root) {
            return check(root->left,root->right);
    }
