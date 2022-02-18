Node *insertInMiddle(Node *head, int x)
{
	Node *tail = head;
	int count = 0;
	while (tail->next != NULL)
	{
		tail = tail->next;
		count++;
	}
	Node *ele = new Node(x);

	Node *curr = head;
	int k = count / 2;
	while (k--)
	{
		curr = curr->next;
	}
	ele->next = curr->next;
	curr->next = ele;

	return head;
}

// Method 2
int getMiddle(Node *head)
{

	Node *fast = head;
	Node *slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}