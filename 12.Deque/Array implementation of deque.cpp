struct deque
{
    int size, cap;
    int *arr;
    deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isfull(){
        return (size == cap);
    }
    bool isempty(){
        return (size == 0);
    }
    void insertRear(int x)
    {
        if(isfull())
            return;
        arr[size] = x;
        size++;
    }
    void deleteRear()
    {
        if(isempty())
            return;
        size--;
    }
    int getRear()
    {
        if(isempty())
            return -1;
        else
            return (size - 1);
    }
    void insertfront(int x){
        if(isfull){
            return;
        }
        for (int i = size-1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }
    void deletefront(){
        if(isempty()){
            return;
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getfront(){
        if(isempty())
        {
            return -1;
        }
        else
            return 0;
    }
};
