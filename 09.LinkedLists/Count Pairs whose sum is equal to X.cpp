int countPairs(struct Node *head1, struct Node *head2, int x)
{
    unordered_map<int, int> m;
    Node *curr = head1;
    while (curr)
    {
        m[curr->data]++;
        curr = curr->next;
    }
    Node *cur = head2;
    int count = 0;
    while (cur)
    {
        if (m.find(x - (cur->data)) != m.end())
        {
            count++;
        }
        cur = cur->next;
    }
    return count;
}