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
Node *addOne(Node *head)
{
    // Your Code here
    // return head of list after adding one

    head = reverse(head);
    Node *curr1 = head;
    int c = 1;
    Node *nhead = new Node(0);
    Node *curr3 = nhead;
    while (curr1 || c)
    {
        if (curr1)
        {
            c += curr1->data;
            curr1 = curr1->next;
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