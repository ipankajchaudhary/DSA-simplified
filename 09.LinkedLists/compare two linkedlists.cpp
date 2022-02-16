bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *curr1 = head1;
    SinglyLinkedListNode *curr2 = head2;
    while(curr1 != NULL && curr2!=NULL)
    {
        if(curr1->data != curr2->data)
        {
            return false;
        }
        else{
            curr1  = curr1->next;
            curr2 = curr2->next;
        }
    }
    if(curr1 != NULL || curr2 != NULL)
    {
        return false;
    }
    return true;
}
