void reverse(queue<int> &queue) {
    if(queue.empty()){
        return;
    }
    int x = queue.front();
    queue.pop();
    reverse(queue);
    queue.push(x);
}