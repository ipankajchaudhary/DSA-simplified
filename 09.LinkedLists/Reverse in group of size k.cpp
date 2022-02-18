node *reverse(struct node *head, int k)
{
    // Complete this method
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;
    int count = 0;
    while (curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next)
    {
        node *resthead = reverse(next, k);
        head->next = resthead;
    }
    return prev;
}