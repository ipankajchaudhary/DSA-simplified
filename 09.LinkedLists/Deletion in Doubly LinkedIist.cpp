Node *delHead(Node *head)
{
    if(!head)
    {
        return NULL;
    }
    if(!(head->next))
    {
        delete head;
        return NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}

Node *delTail(Node *head)
{
     if(!head)
    {
        return NULL;
    }
    if(!(head->next))
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}