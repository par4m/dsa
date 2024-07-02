
#include <bits/stdc++.h>

using namespace std;

#define Max 100

class Queue {
  int arr[Max];
  int front = -1;
  int rear = -1;

public:
  void PushRear(int data) {
    if (isFull()) {
      cout << "Queue is full\n";
      return;
    }
    if (front == -1) {
      front = 0;
    }
    arr[++rear] = data;
  }

  void PushFront(int data) {
    if (isFull()) {
      cout << "Queue is full\n";
      return;
    }
    if (front == -1) {
      front = 0;
      rear = 0;
      arr[front] = data;
      return;
    }
    if (front > 0) {
      arr[--front] = data;
    } else {
      cout << "Cannot push to the front as there is no space\n";
    }
  }

  int PopRear() {
    if (isEmpty()) {
      cout << "Queue is empty\n";
      return -1;
    }
    int temp = arr[rear];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      rear--;
    }
    return temp;
  }

  int PopFront() {
    if (isEmpty()) {
      cout << "Queue is empty\n";
      return -1;
    }
    int temp = arr[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front++;
    }
    return temp;
  }

  bool isEmpty() { return (front == -1 && rear == -1); }

  bool isFull() { return (rear == Max - 1); }
};

int main(int argc, char *argv[]) {
  Queue q;
  q.PushFront(10);
  q.PushRear(20);
  q.PushFront(5);
  q.PushRear(30);

  cout << "Pop from front: " << q.PopFront() << endl; // Should print 5
  cout << "Pop from rear: " << q.PopRear() << endl;   // Should print 30
  cout << "Pop from front: " << q.PopFront() << endl; // Should print 10
  cout << "Pop from rear: " << q.PopRear() << endl;   // Should print 20
  cout << "Pop from front: " << q.PopFront()
       << endl; // Should print "Queue is empty"

  return 0;
}
