Node *InsertAtBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    if(!head)
    {
        head->prev = temp;
    }
    return temp;
}
Node *InsertAtEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    Node *curr = head;
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}