int countTriplets(struct Node* head, int x) 
{ 
     unordered_map<int,int> mp;
    Node* node=head;
    int res=0;
    while(node->next) {
        Node* temp=node->next;
        while(temp) {
            if(mp.find(x-node->data-temp->data)!=mp.end()) res++;
            temp=temp->next;
        }
        mp[node->data]++;
        node=node->next;
    }
    return res;
} 