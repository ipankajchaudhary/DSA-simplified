Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node* tail=head;
	int count=0;
	while(tail->next!=NULL){
	    tail=tail->next;
	    count++;
	}
	Node* ele=new Node(x);

	Node* curr=head;
	int k=count/2;
	while(k--){
	    curr=curr->next;
	}
	ele->next=curr->next;
	curr->next=ele;
	
	return head;
}