Node *floor(Node *root, int x){
  Node *res = NULL;
  while(root!=NULL){
    if(root->val == x){
      return root;
      }
    else if(root->val > x){
      root = root->left;
      }
    else{
      res = root;
      root = root->right;
      }
     }
    return root;
}
