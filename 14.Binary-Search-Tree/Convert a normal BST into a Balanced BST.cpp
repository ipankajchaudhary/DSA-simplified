vector<int> v;
TreeNode *arrToBst(int s, int e, vector<int> &nums)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = arrToBst(s, mid - 1, nums);
    root->right = arrToBst(mid + 1, e, nums);
    return root;
}
void inorder(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
}
TreeNode *balanceBST(TreeNode *root)
{
    inorder(root);
    return arrToBst(0, v.size() - 1, v);
}