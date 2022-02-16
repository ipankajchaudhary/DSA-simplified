Node *reverseDLL(Node *head)
{
    // Your code here
    Node *curr = head;
    while (curr->next != NULL)
    {
        swap(curr->prev, curr->next);
        curr = curr->prev;
    }
    swap(curr->prev, curr->next);
    return curr;
}