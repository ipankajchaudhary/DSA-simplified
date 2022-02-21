// Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even positions node are together.
// Assume the first element to be at position 1 followed by second element at position 2 and so on.

void rearrangeEvenOdd(Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    Node *oddH = NULL;
    Node *oddT = NULL;
    Node *evenH = NULL;
    Node *evenT = NULL;

    Node *curr = head;
    int i = 0;
    for (; curr != NULL; curr = curr->next)
    {

        // int i = curr->data;
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

        i++;
    }
    if (!evenH || !oddH)
    {
        return;
    }

    evenT->next = oddH;
    oddT->next = NULL;
    // return evenH;
}