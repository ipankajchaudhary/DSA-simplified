// Insertion in Beginning

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        temp->next = temp;
    }
    else{
        Node *curr = head;
        while (curr->next!=head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;

    }
    return temp;
}

// Method 2
Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        temp->next = temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        swap(head->data, temp->data);
    }
    return head;
}


// Insertion in End

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        temp->next = temp;
    }
    else{
         temp->next = head->next;
        head->next = temp;
        swap(head->data, temp->data);
    }
    return temp;
}