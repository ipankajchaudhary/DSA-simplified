Node *reverse(struct Node *head)
{

    Node *curr = head;
    Node *prev = NULL;
    while (curr)
    {
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    if (!head)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    Node *curr = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *rev = reverse(slow->next);
    while (rev)
    {
        if (rev->data != curr->data)
        {
            return false;
        }
        rev = rev->next;
        curr = curr->next;
    }
    return true;
}