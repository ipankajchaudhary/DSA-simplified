bool res = true;
    int height(Node* root)
        {
            if(!root) return 0;
            int left = height(root->left);
            int right = height(root->right);
            if(res && abs(left-right)>1) res = false;
            return 1+max(left, right);
        }
    bool isBalanced(Node *root)
        {
            height(root);
            return res;
        }