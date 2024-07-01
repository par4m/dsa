#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

public:
  Node(int data, Node *prev = nullptr, Node *next = nullptr) {
    this->data = data;
    this->prev = prev;
    this->next = next;
  }
};

void InsertEnd(Node *head, int data) {

  Node *temp = new Node(data);
  Node *temp2 = head;

  if (head == nullptr) {
    return;
  }

  while (temp2->next != nullptr) {
    temp2 = temp2->next;
  }
  temp2->next = temp;
  temp->prev = temp2;
}

void Display(Node *head) {

  Node *temp = head;
  Node *last = nullptr;

  // Display Front
  while (temp != nullptr) {
    cout << " ->" << temp->data;
    last = temp;
    temp = temp->next;
  }

  cout << " \n";

  // Display backward
  while (last != nullptr) {
    cout << " ->" << last->data;
    last = last->prev;
  }

  cout << " \n";
}

void InsertAfterX(Node *head, int after, int data) {

  Node *temp = head;
  Node *newNode = new Node(data, nullptr, nullptr);

  if (head == NULL) {
    return;
  }

  while (temp->data != after) {
    temp = temp->next;
  }
  newNode->prev = temp;
  newNode->next = temp->next;
  temp->next = newNode;
  if (newNode->next != NULL) {
    newNode->next->prev = newNode;
  }
}

int main(int argc, char *argv[]) {
  Node *x = new Node(1);

  InsertEnd(x, 2);
  InsertEnd(x, 3);
  InsertEnd(x, 4);
  InsertEnd(x, 5);
  InsertEnd(x, 6);

  Display(x);

  InsertAfterX(x, 5, 7);

  Display(x);

  return 0;
}
