class MyCircularQueue {
    deque<int> dq;
    int capacity;
public:
    MyCircularQueue(int k) {
        capacity = k;
    }
    
    bool enQueue(int value) {
        if(dq.size()>=capacity) return false;
        dq.push_back(value);
        return true;
    }
    
    bool deQueue() {
        if(dq.empty()) return false;
        dq.pop_front();
        return true;
    }
    
    int Front() {
         if(dq.empty()) return -1;
        return dq.front();
    }
    
    int Rear() {
        if(dq.empty()) return -1;
        return dq.back();
    }
    
    bool isEmpty() {
        if(dq.empty()) return true;
        return false;
    }
    
    bool isFull() {
        if(dq.size()==capacity)return true;
        return false;
    }
};