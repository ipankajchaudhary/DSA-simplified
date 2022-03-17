int minh(Node *curr)
{
    if (curr->left == NULL && curr->right == NULL)
    {
        return 0;
    }
    if (curr->left && !curr->right)
    {
        return 1 + minh(curr->left);
    }
    if (curr->right && !curr->left)
    {
        return 1 + minh(curr->right);
    }
    return min(1 + minh(curr->left), 1 + minh(curr->right));
}
int maxh(Node *curr)
{
    if (curr->left == NULL && curr->right == NULL)
    {
        return 0;
    }
    if (curr->left && !curr->right)
    {
        return 1 + maxh(curr->left);
    }
    if (curr->right && !curr->left)
    {
        return 1 + maxh(curr->right);
    }
    return max(1 + maxh(curr->left), 1 + maxh(curr->right));
}
bool check(Node *root)
{
    return minh(root) == maxh(root);
}