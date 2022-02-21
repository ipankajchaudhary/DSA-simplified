Node* partition(Node *l, Node *h){
    Node *curr = l;
    Node *last = l;
    Node *pivot = h;
    while(curr!=h)
    {
        if(curr->data < pivot->data)
        {
            swap(curr->data,last->data);
            last = last->next;
        }
        curr = curr->next;
    }
    swap(last->data,pivot->data);
    return last;
}