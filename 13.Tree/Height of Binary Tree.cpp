 int height(struct Node* node){
        if(!node) return 0;
        int l = height(node->left);
        int r = height(node->right);
        int ans = max(l,r)+1;
        return ans;
    }