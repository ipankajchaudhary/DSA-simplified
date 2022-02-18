// Method 1

int intersectPoint(Node *head1, Node *head2)
{
    set<Node *> s;
    Node *curr = head1;
    while (curr)
    {
        s.insert(curr);
        curr = curr->next;
    }
    curr = head2;
    while (curr)
    {
        if (s.find(curr) != s.end())
        {
            return curr->data;
        }
        curr = curr->next;
    }
    return -1;
}

// Method 2

int intersectPoint(Node *head1, Node *head2)
{
    int c1 = 0,c2 = 0;
    Node *curr = head1;
    while (curr)
    {
        curr = curr->next;
        c1++;
    }
    curr = head2;
    while (curr)
    {
        curr = curr->next;
        c2++;
    }
    int k = abs(c1 - c2);
    Node *curr1 = head1;
    Node *curr2 = head2;

    if (c1 > c2)
    {
        while (k--)
        {
            curr1 = curr1->next;
        }
    }
    else
    {
        while (k--)
        {
            curr2 = curr2->next;
        }
    }
    while (curr1 && curr2)
    {
        if (curr1 == curr2)
        {
            return curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return -1;
}
