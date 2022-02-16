int search(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr)
    {
        if(curr->data == x)
        {
            returrn pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}