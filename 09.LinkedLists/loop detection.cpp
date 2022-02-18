// Method 1

// Naive Method
bool detectLoop(Node *head)
{

    for (Node *i = head; i; i = i->next)
    {
        for (Node *j = head; j->next != i; j = j->next)
        {
            if (i->next == j)
            {
                return true;
            }
        }
    }
    return false;
}

// Method 2

// If modification of Linked List structure is allowed.
// New Structure
//     struct Node{
//         int data;
//         bool visited;
//         Node *next;
//         Node(int d)
//         {
//             data = d;
//             next = NULL;
//             visited = false;
//         }
//     }
// Mark visit = false for all, and then visit every node and visit = true
// if any visited occurs again, return true

bool detectLoop(Node *head)
{
    Node *curr = head;
    while (curr->next)
    {
        if (curr->visited)
        {
            return true;
        }
        curr->visited = true;
        curr = curr->next;
    }
    return false;
}

// Method 3

// IF Modification of linked list is allowed.
// Traverse the linkedlist, while traversing, change the next of every to dummy node, if any node have next to dummy node already, then there is a loop.

bool detectLoop(Node *head)
{
    Node *temp = new Node(2);
    Node *curr = head;
    while (curr)
    {
        if (curr->next == NULL)
        {
            return false;
        }
        if (curr->next == temp)
        {
            return true;
        }
        Node *curnext = curr->next;
        curr->next = temp;
        curr = curnext;
    }
    return false;
}

// Method 4

// Store the addresses of every node in the set, if the address of next of any node is already is in the set then there is a loop

bool detectLoop(Node *head)
{
    unordered_set<Node *> s;
    for (Node *curr = head; curr; curr = curr->next)
    {
        if (s.find(curr) != s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
}