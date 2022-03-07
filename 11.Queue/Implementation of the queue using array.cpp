struct queue
{
    int *arr;
    int front, cap,size;
    queue(int c)
    {
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }
    bool isfull()
    {
        return (cap == size);
    }
    bool isempty(){
        return (size == 0);
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        else{
            return front;
        }
    }
    int getrear(){
        if(isempty()){
            return -1;
        }
        else{
            return (front + size - 1) % cap;
        }
    }
    void enqueue(int x)
    {
        if(isfull()){
            return; 
        }else{
            int rear = getrear();
            rear = (rear + 1)%cap;
            arr[rear] = x;
            size++;
        }
    }
    void dequeue()
    {
        if(isempty())
        {
            return;
        }
        else{
            front = (front + 1) % cap;
            size--;
        }
    }
};
