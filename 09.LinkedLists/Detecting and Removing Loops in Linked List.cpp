void removeLoop(Node *head)
{

    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (slow != fast)
    {
        return;
    }
    slow = head;
    if (slow == fast)
    {
        while (fast->next != slow)
            fast = fast->next;
    }
    else
    {
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    fast->next = NULL;
}