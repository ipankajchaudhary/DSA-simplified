int countNodesinLoop(struct Node *head)
{
    unordered_map<Node *,int> s;
    int i = 0;
    for (Node *curr = head; curr; curr = curr->next,i++)
    {
        if (s.find(curr) != s.end())
        {
            return i-s[curr];
        }
        s[curr] = i;
    }
    return 0;
}