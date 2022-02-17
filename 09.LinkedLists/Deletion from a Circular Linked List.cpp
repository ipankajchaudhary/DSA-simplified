// Delete head of CLL 

Node *delHead(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == head)
    {
        delete head;
        return NULL;
    }f
    else{
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}

// Delete kth from cll 

Node *delkth(Node *head, int k)
{
    if(!head)
    {
        return NULL;
    }
    if(k == 1)
    {
        delHead(head);
    }
    else{
        Node *curr = head;
        for (int i = 0; i < k - 2;i++)
        {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
    return head;
}
