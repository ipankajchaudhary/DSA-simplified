Node *rotatebyone(Node *head, Node *tail)
{
    Node *prev = head;
    head = head->next;
    tail->next = prev;
    prev->next = NULL;
    return head;
}
Node *rotate(Node *head, int k)
{
    Node *tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    while (k--)
    {
        head = rotatebyone(head, tail);
        tail = tail->next;
    }
    return head;
}