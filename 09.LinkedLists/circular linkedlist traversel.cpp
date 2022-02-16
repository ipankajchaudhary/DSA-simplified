void printdata(Node *head)
{
    if(!head){
        return;
    }
    for (Node *i = head; i!=head; i = i->next)
    {
        cout << i->data;
    }
}