#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

void MyStack ::push(int x) 
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

int MyStack ::pop() 
{
    if(top == NULL) return -1;
    int res = top->data;
    StackNode *temp = top;
    top = top->next;
    delete temp;
    return res;
}
