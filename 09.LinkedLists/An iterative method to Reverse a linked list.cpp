Node *reverseList(struct Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr)
    {
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}