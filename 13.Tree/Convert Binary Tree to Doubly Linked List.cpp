Node *prev = NULL;
Node *bToDLL(Node *root)
{
    if (!root)
        return root;
    Node *head = bToDLL(root->left);
    if (prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    bToDLL(root->right);
    return head;
}