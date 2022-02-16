Node *insertAtBegining(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (!head)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node *insertAtPos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    if(pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos-2 && !curr; i++)    {
        curr = curr->next;
    }
    if(!curr)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}