// Method 1
int getNthFromLast(Node *head, int n)
{
    Node *curr = head;
    int count = 0;
    while (curr->next)
    {
        curr = curr->next;
        count++;
    }
    if (count + 1 < n)
    {
        return -1;
    }
    Node *c = head;
    for (int i = 0; i < count - n + 1 && c; i++)
    {
        c = c->next;
    }
    return c->data;
}

int getNthFromLast(Node *head, int n)
{
    Node *first = head;
    Node *second = head;
    for (int i = 0; i < n; i++)
    {
        if (!first)
        {
            return -1;
        }
        first = first->next;
    }
    int count = 0;
    while (first)
    {
        second = second->next;
        first = first->next;
    }
    return second->data;
}