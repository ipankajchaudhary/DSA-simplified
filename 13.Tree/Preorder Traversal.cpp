void help(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->data);
    help(root->left, ans);
    help(root->right, ans);
}
vector<int> preorder(Node *root)
{
    vector<int> ans;
    help(root, ans);
    return ans;
}

// Iterative
vector<int> preOrder(Node *root)
{
    vector<int> v;
    if (!root)
        return v;
    stack<Node *> st;
    Node *curr = root;
    while (curr || !st.empty())
    {
        while (curr)
        {
            v.push_back(curr->data);
            if (curr->right)
            {
                st.push(curr->right);
            }
            curr = curr->left;
        }
        if (!st.empty())
        {
            curr = st.top();
            st.pop();
        }
    }
    return v;
}