int helper(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    int l = helper(node->left);
    int r = helper(node->right);
    int x = node->data;
    node->data = l + r;
    return l + r + x;
}
void toSumTree(Node *node)
{
    int x = helper(node);
}