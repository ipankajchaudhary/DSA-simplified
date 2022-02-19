ListNode *deleteMiddle(ListNode *head)
{
    if (!(head->next))
    {
        return NULL;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *temp = slow->next;
    if (!temp)
    {
        head->next = NULL;
        delete slow;
        return head;
    }
    slow->val = temp->val;
    slow->next = temp->next;
    delete temp;
    return head;
}