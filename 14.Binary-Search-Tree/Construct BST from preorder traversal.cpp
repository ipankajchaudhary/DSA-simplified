 int preindex = 0;
    TreeNode* helper(vector<int>& pre, vector<int>& in, int is, int ie){
        if(is>ie) return NULL;
        TreeNode *root =  new TreeNode(pre[preindex++]);
        int inIndex;
        for(int i = is;i<=ie;i++){
            if(in[i] == root->val){
                inIndex = i;
                break;
            }
        }
        root->left = helper(pre,in,is,inIndex-1);
        root->right = helper(pre,in,inIndex+1,ie);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        vector<int> in(pre.begin(),pre.end());
        sort(in.begin(),in.end());
        return helper(pre,in,0,pre.size()-1);
    }
