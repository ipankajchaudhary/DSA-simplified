Node *pairWiseSwap(struct Node *head)
{
    if (!head || !head->next)
    {
        return head;
    }
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr && curr->next)
    {
        prev->next = curr->next;
        prev = curr;
        Node *n = curr->next->next;
        curr->next->next = curr;
        curr = n;
    }
    prev->next = curr;
    return head;
}