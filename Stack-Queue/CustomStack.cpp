#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {
  int arr[MAX];
  int top = -1;

public:
  void Push(int data) {
    if (top >= MAX - 1) {
      cout << " FUll";
      return;
    }
    top++;
    arr[top] = data;
  }

  int Pop() {
    if (top == -1) {
      return -1;
    }
    int temp = arr[top];
    top--;
    return temp;
  }

  bool isFull() {
    if (top >= MAX - 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() { return top == -1; }

  int Top() { return arr[top]; }
};
int main(int argc, char *argv[]) {
  Stack s1;
  s1.Push(2);
  s1.Push(1);
  s1.Push(3);
  cout << s1.Top();
  s1.Pop();

  cout << s1.Top();

  return 0;
}
