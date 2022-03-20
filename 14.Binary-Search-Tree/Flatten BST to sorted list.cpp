 bool helper(Node* root, int min, int max){
        if(root ==  NULL){
            return true;
        }
        bool a= false,b= false,c = false;
        if(root->data > min && root->data < max){
            a = true;
        }
        b = helper(root->left,min,root->data);
        c = helper(root->right,root->data,max);
        return a&&b&&c;
        
    }
    bool isBST(Node* root) 
    {
        return helper(root, INT_MIN, INT_MAX);
    }