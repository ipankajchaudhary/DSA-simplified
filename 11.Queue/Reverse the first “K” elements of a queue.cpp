queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    int n = q.size();
    int x = n-k;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    if(n == k) return q;
    else{
        while(x>0)
        {
            q.push(q.front());
            q.pop();
            x--;
        }
        return q;
    }
}
