struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void dequeue(){
        if(front == NULL){
            return;
        }
        Node *temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete(temp);
    }
};

