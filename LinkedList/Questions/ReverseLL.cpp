
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class ListNode {
public:
  int data;
  ListNode *next;

public:
  ListNode(int data, ListNode *next = nullptr) {
    this->data = data;
    this->next = next;
  }
};

void printData(ListNode *head) {
  int ctr = 0;
  while (head != nullptr) {
    cout << head->data << "->";
    head = head->next;
    ctr++;
  }
  cout << " Length is " << ctr << " \n";
}

ListNode *LLVector(vector<int> &arr) {
  ListNode *head = new ListNode(arr[0]);
  ListNode *mover = head;
  for (int i = 1; i < arr.size(); i++) {
    ListNode *temp = new ListNode(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }

  return head;
}

void PrintReverse(ListNode *caller, ListNode *head) {
  if (head == nullptr) {
    return;
  }
  PrintReverse(head, head->next);
  head->next = caller;
}

ListNode *reverseBetween(ListNode *head, int left, int right) {
  if (left == right) {
    return head;
  }
  ListNode *current = head;
  ListNode *prev = nullptr;

  // skip the first left - 1 nodes
  for (int i = 0; current != nullptr && i < left - 1; i++) {
    prev = current;
    current = current->next;
  }
  // current becomes the node which is starting of part to be reversed
  ListNode *last = prev; // node which is just before the part to be reversed
  ListNode *newEnd = current;

  ListNode *next = current->next;

  // reverse b/w left and right (right - left + 1)
  for (int i = 0; current != nullptr && i < (right - left + 1); i++) {
    // point next to next of current

    // point current backward
    current->next = prev;

    // move
    prev = current;
    current = next;
    if (next != nullptr) {
      next = next->next;
    }
  }
  if (last != nullptr) {
    last->next = prev;
  } else {
    head = prev;
  }
  newEnd->next = current;

  return head; // Placeholder return value
}

ListNode *ReverseLL(ListNode *&node) {
  ListNode *head;

  if (node == nullptr || node->next == nullptr) {
    head = node;
    return head;
  }

  head = ReverseLL(node->next);
  ListNode *q = node->next;
  q->next = node;
  node->next = nullptr;

  return head;
}

void DeleteNode(ListNode *&head, int data) {
  ListNode *temp = head;
  if (head->data == data) {
    head = head->next;
    delete temp;
    return;
  }

  ListNode *prev = nullptr;
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

void ReverseWithout(ListNode *&head) {
  ListNode *pres = head;
  ListNode *prev = nullptr;
  ListNode *nex = nullptr;

  while (pres != nullptr) {
    // point next to next of current
    nex = pres->next;

    // point current backward
    pres->next = prev;

    // move
    prev = pres;
    pres = nex;
  }

  head = prev;
}

int main(int argc, char *argv[]) {
  ListNode *y = new ListNode(5, nullptr);
  printData(y);

  vector<int> n = {2, 1, 4, 3, 5};

  ListNode *x = LLVector(n);
  printData(x);
  cout << " \n";

  ReverseWithout(x);

  printData(x);
  return 0;
}
