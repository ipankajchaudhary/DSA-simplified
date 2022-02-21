Node *rotatebyone(Node *head, Node *tail)
{
    Node *prev = head;
    head = head->next;
    head->prev = NULL;
    tail->next = prev;
    prev->prev = tail;
    prev->next = NULL;
    return head;
}
Node *update(Node *head, int p)
{
    Node *tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    while (p--)
    {
        head = rotatebyone(head, tail);
        tail = tail->next;
    }
    return head;
}