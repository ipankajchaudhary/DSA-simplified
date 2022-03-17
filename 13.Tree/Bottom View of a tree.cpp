vector<int> bottomView(Node *root)
{
    map<int, int> mp;
    queue<pair<Node *, pair<int, int>>> q;
    q.push(make_pair(root, make_pair(0, 0)));
    vector<int> v;
    while (!q.empty())
    {
        int x = q.size();
        for (int i = 0; i < x; i++)
        {
            auto t = q.front();
            q.pop();
            int hd = t.second.first;
            int lv = t.second.second;
            Node *curr = t.first;

            mp[hd] = curr->data;

            if (curr->left)
            {
                q.push(make_pair(curr->left, make_pair(hd - 1, lv + 1)));
            }
            if (curr->right)
            {
                q.push(make_pair(curr->right, make_pair(hd + 1, lv + 1)));
            }
        }
    }
    for (auto e : mp)
    {
        v.push_back(e.second);
    }
    return v;
}