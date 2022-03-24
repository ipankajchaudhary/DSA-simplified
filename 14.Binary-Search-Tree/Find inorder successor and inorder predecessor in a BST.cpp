void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root == NULL){
        return;
    }
    if(root->key  == key){
        if(root->left != NULL){
            Node *temp = root->left;
            while(temp->right != NULL){
                temp = temp->right;
            }
            pre = temp;
        }
        if(root->right != NULL){
            Node *temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }
            suc = temp;
        }
        return;
    }
    if(root->key  > key){
        suc = root;
        findPreSuc(root->left,pre, suc,key);
    }
    else{
        pre = root;
        findPreSuc(root->right,pre,suc,key);
    }
}
