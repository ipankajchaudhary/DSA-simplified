 bool helper(TreeNode *root, int k, unordered_set<int> &s){
        if(!root){
            return NULL;
        }
        if(helper(root->left,k,s) == true){
            return true;
        }
        if(s.find(k-root->val)!=s.end()){
            return true;
        }
        else{
            s.insert(root->val);
        }
        return helper(root->right,k,s);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s;
        return helper(root,k,s);
    }
