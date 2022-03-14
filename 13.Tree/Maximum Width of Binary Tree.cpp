int getMaxWidth(Node *root)
{

    queue<Node *> q;
    q.push(root);
    int res = INT_MIN;
    while (!q.empty())
    {
        int x = q.size();
        res = max(res, x);
        for (int i = 0; i < x; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
    return res;
}