int sum(Node *root)
{
    if (!root)
        return 0;
    return sum(root->left) + root->data + sum(root->right);
}
bool isSumTree(Node *root)
{
    if (!root || (!root->left && !root->right))
        return true;
    int ls = sum(root->left);
    int rs = sum(root->right);
    if (ls + rs != root->data)
        return false;
    bool suml = isSumTree(root->left);
    bool sumr = isSumTree(root->right);
    return suml && sumr;
}