Node *removeDuplicates(Node *head)
{
    unordered_map<int, int> mp;
    Node *prev = head;
    Node *curr = prev->next;
    mp[(prev->data)]++;

    while (curr != NULL)
    {
        if (mp.find((curr->data)) != mp.end())
        {
            prev->next = curr->next;
            curr = prev->next;
        }
        else
        {
            mp[(curr->data)]++;
            curr = curr->next;
            prev = prev->next;
        }
    }
    return head;
}