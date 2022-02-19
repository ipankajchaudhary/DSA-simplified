Node* sortedMerge(Node* a, Node* b)  
{  
    // code here
    if(!a)
    {
        return b;
    }
    if(!b)
    {
        return a;
    }
    Node *head = NULL;
    Node *tail = NULL;
    if(a->data <= b->data)
    {
        head = a;
        tail = a;
        a = a->next;
    }
    else{
        head = b;
        tail = b;
        b = b->next;
    }
    while(a&&b)
    {
        if(a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else{
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(!a)
    {
        tail->next = b;
    }
    else{
        tail->next = a;
    }
    return head;
}