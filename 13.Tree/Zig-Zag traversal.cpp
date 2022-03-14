vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    if (!root)
        return {};
    vector<vector<int>> ans;
    bool flag = true; // true for even level
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int x = q.size();
        vector<int> v;
        for (int i = 0; i < x; i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            v.push_back(curr->val);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        if (!flag)
        {
            reverse(v.begin(), v.end());
        }
        ans.push_back(v);
        flag = !flag;
    }
    return ans;
}