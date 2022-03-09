void interLeaveQueue(queue<int>& q)
{
    stack<int> s;
    int halfSize = q.size() / 2;
  
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }
  
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < halfSize; i++) {
        q.push(q.front());
        q.pop();
    }
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }
  
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}