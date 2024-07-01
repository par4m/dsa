#include <bits/stdc++.h>
using namespace std;

class Node {

public:
  int data;
  Node *next;

public:
  Node(int data, Node *next = nullptr) { this->data = data; }
};

void InsertEnd(Node *&head, int data) {
  Node *temp = head;
  Node *newNode = new Node(data);
  if (head == nullptr) {

    head = newNode;
    head->next = head;
    return;
  }

  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = newNode;

  newNode->next = head;
}

void Delete(Node *head, int data) {

  Node *temp = head;
  Node *prev = nullptr;

  while (temp->data != data) {
    prev = temp;

    temp = temp->next;
    if (temp == nullptr) {
      cout << " Not found data to delete";
      return;
    }
  }

  prev->next = temp->next;
}

void Display(Node *head) {
  cout << head->data << " ->";
  Node *temp = head->next;
  while (temp != head) {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << " Head";
}

int main(int argc, char *argv[]) {

  Node *x = nullptr;
  InsertEnd(x, 0);
  Display(x);
  cout << " \n";

  InsertEnd(x, 1);
  InsertEnd(x, 2);

  Display(x);
  cout << " \n";
  Delete(x, 2);
  Display(x);
  return 0;
}
