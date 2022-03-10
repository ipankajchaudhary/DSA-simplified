struct myds
{
    deque<int>dq;
    void insertmin(int x){
        dq.push_front(x);
    }
    void insertmax(int x){
        dq.push_back(x);
    }
    int getmin(){
        return dq.front();
    }
    int getmax(){
        return dq.back();
    }
    int extractmin(){
        return dq.pop_front();
    }
    int extractmax(){
        return dq.pop_back();
    }
};