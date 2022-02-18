Node *reverseBetween(Node *head, int left, int right)
{
    Node *ptr1 = head;
    int n = right - left + 1;
    vector<int> vec;
    left--;
    while (left--)
    {
        ptr1 = ptr1->next;
    }
    Node *l = ptr1;
    while (n--)
    {
        vec.push_back(l->data);
        l = l->next;
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        ptr1->data = vec[i];
        ptr1 = ptr1->next;
    }
    return head;
}