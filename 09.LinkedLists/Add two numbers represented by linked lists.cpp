Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverse(first);
    second = reverse(second);
    Node *curr1 = first;
    Node *curr2 = second;
    int c = 0;
    Node *nhead = new Node(0);
    Node *curr3 = nhead;
    while (curr1 || curr2 || c)
    {
        if (curr1)
        {
            c += curr1->data;
            curr1 = curr1->next;
        }
        if (curr2)
        {
            c += curr2->data;
            curr2 = curr2->next;
        }
        curr3->next = new Node(c % 10);
        c /= 10;
        curr3 = curr3->next;
    }
    nhead = reverse(nhead);
    curr3 = nhead;
    while (curr3->next->next)
    {
        curr3 = curr3->next;
    }
    Node *temp = curr3->next;
    curr3->next = NULL;
    delete temp;
    return nhead;
}