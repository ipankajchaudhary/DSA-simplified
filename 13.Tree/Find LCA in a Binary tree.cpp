TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root)
    {
        return NULL;
    }
    if (root->val == p->val || root->val == q->val)
    {
        return root;
    }
    TreeNode *lca1 = lowestCommonAncestor(root->left, p, q);
    TreeNode *lca2 = lowestCommonAncestor(root->right, p, q);
    if (lca1 != NULL && lca2 != NULL)
    {
        return root;
    }
    if (lca1 != NULL)
    {
        return lca1;
    }
    else
    {
        return lca2;
    }
}