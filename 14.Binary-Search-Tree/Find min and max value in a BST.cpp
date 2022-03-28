int minValue(Node* root) {
    if(root == NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}
int maxValue(Node* root) {
    if(root == NULL){
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->data;
}
