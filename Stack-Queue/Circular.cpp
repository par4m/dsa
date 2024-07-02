
#include <iostream>

#define MAX 10

using namespace std;

class CircularQueue {
  int arr[MAX];
  int front;
  int rear;

public:
  CircularQueue() {
    front = -1;
    rear = -1;
  }

  void Push(int data) {
    if (isFull()) {
      std::cout << "Queue is full\n";
      return;
    }
    if (isEmpty()) {
      front = 0;
      rear = 0;
    } else {
      rear = (rear + 1) % MAX;
    }
    arr[rear] = data;
  }

  int PopRear() {
    if (isEmpty()) {
      std::cout << "Queue is empty\n";
      return -1;
    }
    int temp = arr[rear];
    if (front == rear) { // Only one element was in the queue
      front = -1;
      rear = -1;
    } else {
      rear = (rear - 1 + MAX) % MAX; // Move rear back
    }
    return temp;
  }

  int PopFront() {
    if (isEmpty()) {
      std::cout << "Queue is empty\n";
      return -1;
    }
    int temp = arr[front];
    if (front == rear) { // Only one element was in the queue
      front = -1;
      rear = -1;
    } else {
      front = (front + 1) % MAX;
    }
    return temp;
  }

  bool isEmpty() { return (front == -1); }

  bool isFull() { return ((rear + 1) % MAX == front); }
};

int main() {
  CircularQueue q;

  q.Push(1);
  q.Push(2);
  q.Push(3);
  q.Push(4);
  q.Push(5);
  q.Push(6);
  q.Push(7);
  q.Push(8);
  q.Push(9);
  q.Push(10);

  std::cout << "Front element: " << q.PopFront() << std::endl; // Should print 1
  std::cout << "Rear element: " << q.PopRear() << std::endl; // Should print 10
  std::cout << "Front element: " << q.PopFront() << std::endl; // Should print 2
  std::cout << "Rear element: " << q.PopRear() << std::endl;   // Should print 9
  std::cout << "Front element: " << q.PopFront() << std::endl; // Should print 3
  std::cout << "Rear element: " << q.PopRear() << std::endl;   // Should print 8

  return 0;
}
