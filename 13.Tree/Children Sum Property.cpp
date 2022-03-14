 bool isSumTree(Node* root)
    {
        if(!root) return true;
        if(!(root->left) && !(root->right)) return true;
        int sum = 0;
        if(root->left){
            sum+=(root->left->data);
        }
        if(root->right){
            sum+=(root->right->data);
        }
        
        return (root->data == sum &&
                isSumTree(root->left) &&
                isSumTree(root->right));
        
    }