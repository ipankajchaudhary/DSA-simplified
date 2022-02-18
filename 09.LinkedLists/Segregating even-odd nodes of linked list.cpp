Node *divide(int N, Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *oddH = NULL;
    Node *oddT = NULL;
    Node *evenH = NULL;
    Node *evenT = NULL;

    Node *curr = head;
    // int i = 0;
    for (; curr != NULL; curr = curr->next)
    {

        int i = curr->data;
        if (!(i & 1)) // even
        {
            if (evenH == NULL)
            {
                evenH = curr;
                evenT = curr;
            }
            else
            {
                evenT->next = curr;
                evenT = evenT->next;
            }
        }

        else // odd
        {
            if (oddH == NULL)
            {
                oddH = curr;
                oddT = curr;
            }
            else
            {
                oddT->next = curr;
                oddT = oddT->next;
            }
        }

        // i++;
    }
    if (!evenH || !oddH)
    {
        return head;
    }

    evenT->next = oddH;
    oddT->next = NULL;
    return evenH;
}