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

Node *addNew(Node *&head, int data, int index) {

  if (index == 0) {

    Node *newNode = new Node(data);
    newNode->next = head;
    cout << " New Node" << newNode->data << " \n";
    head = newNode;
    return head;
  }
  cout << " current head is " << head->data << " \n";
  head->next = addNew(head->next, data, --index);
  return head;
}

int main(int argc, char *argv[]) {
  Node *y = new Node(5, nullptr);

  printData(y);
  y = addNew(y, 1, 1);
  y = addNew(y, 2, 2);
  printData(y);

  // vector<int> n = {1, 2, 3, 4, 5};

  // Node *x = LLVector(n);
  // printData(x);

  return 0;
}
