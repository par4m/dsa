#include <bits/stdc++.h>
#include <stack>

using namespace std;
class MyQueue {

public:
  stack<int> stack1;
  stack<int> stack2;

  MyQueue() {}

  void push(int x) { stack1.push(x); }

  int pop() {
    while (!stack1.empty()) {
      stack2.push(stack1.top());
      stack1.pop();
    }
    int removed = stack2.top();
    stack2.pop();

    // Put all elements back into Stack 1
    while (!stack2.empty()) {
      int popped = stack2.top();
      stack1.push(popped);
      stack2.pop();
    }

    return removed;
  }

  int peek() {
    while (!stack1.empty()) {
      stack2.push(stack1.top());
      stack1.pop();
    }
    int removed = stack2.top();

    // Put all elements back into Stack 1
    while (!stack2.empty()) {
      int popped = stack2.top();
      stack1.push(popped);
      stack2.pop();
    }

    return removed;
  }

  bool empty() { return stack1.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
using namespace std;
int main(int argc, char *argv[]) {

  MyQueue q;
  q.push(1);

  cout << q.peek();

  q.pop();
  cout << q.peek();

  return 0;
}
