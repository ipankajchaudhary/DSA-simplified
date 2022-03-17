void help(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    help(root->left, ans);
    ans.push_back(root->data);
    help(root->right, ans);
}

vector<int> inOrder(Node *root)
{
    vector<int> ans;
    help(root, ans);
    return ans;
}

// Iterative

vector<int> inOrder(Node *root)
{
    vector<int> v;
    stack<Node *> st;
    Node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        v.push_back(curr->data);
        curr = curr->right;
    }
    return v;
}