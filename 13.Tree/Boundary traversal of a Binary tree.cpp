void left(Node *root, vector<int> &v)
    {
        if(!root){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            return;
        }
        v.push_back(root->data);
        if(root->left!=NULL)
            left(root->left, v);
        else
            left(root->right, v);
       
    }
    void leaf(Node *root,vector<int> &v){
        if(!root){
            return;
        }
        if(root->left == NULL && root->right == NULL){
           v.push_back(root->data);
        }
        leaf(root->left,v);
        leaf(root->right,v);
        
    }
    void right(Node *root,vector<int> &v){
        if(!root){
            return;
        }
        if(root->left == NULL && root->right == NULL){
           return;
        }
        if(root->right!=NULL)
            right(root->right, v);
        else
            right(root->left, v);
        v.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int>v;
        v.push_back(root->data);
        left(root->left,v);
        
        leaf(root->left,v);
        leaf(root->right,v);
        
        right(root->right,v);
       
        return v;
        
    }