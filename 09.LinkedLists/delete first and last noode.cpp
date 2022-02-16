Node* delHead(Node *head)
{
    Node *temp = head->next;
    delete head;
    return temp;
}
Node* delTail(Node *head)
{
    if(!head)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr - next);
    curr->next = NULL;
    return head;
}