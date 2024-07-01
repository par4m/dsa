#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *next;

public:
  Node(int data, Node *next = nullptr) {
    this->data = data;
    this->next = next;
  }
};

void printData(Node *head) {
  int ctr = 0;
  while (head != nullptr) {
    cout << head->data << "->";
    head = head->next;
    ctr++;
  }
  cout << " Length is " << ctr << " \n";
}

void addNew(Node *head, int data) {
  Node *newNode = new Node(data);
  Node *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
}

Node *LLVector(vector<int> &arr) {
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }

  return head;
}

void BubbleSort(Node *head) { BubbleSort(Node * head) }

void DeleteNode(Node *&head, int data) {
  Node *temp = head;
  if (head->data == data) {
    head = head->next;
    delete temp;
    return;
  }

  Node *prev = nullptr;
  while (temp->data != data && temp != nullptr) {
    prev = temp;
    temp = temp->next;
  }

  if (temp->next == nullptr) {
    prev->next = nullptr;
    return;
  }
  prev->next = temp->next;

  delete temp;
}

int main(int argc, char *argv[]) {
  Node *y = new Node(5, nullptr);
  printData(y);
  addNew(y, 7);

  printData(y);

  vector<int> n = {2, 1, 4, 3, 5};

  Node *x = LLVector(n);
  printData(x);
  cout << " \n";

  BubbleSort(x);

  printData(x);

  return 0;
}
