
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

ListNode *getMid(ListNode *head) {
  if (head == nullptr || head->next == nullptr) {
    return head; // Edge case for empty or single-node list
  }

  ListNode *slow = head;
  ListNode *fast = head;
  ListNode *temp = nullptr;

  while (fast != nullptr && fast->next != nullptr) {
    temp = slow;
    slow = slow->next;
    fast = fast->next->next;
  }

  // Splitting the list into two halves
  if (temp != nullptr) {
    temp->next = nullptr;
  }

  // Returning the start of the second half
  return slow;
}

ListNode *reverseList(ListNode *head) {

  ListNode *prev = nullptr;
  ListNode *curr = head;
  ListNode *next = nullptr;

  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  return prev;
}

void reorderList(ListNode *&head) {
  if (head == nullptr || head->next == nullptr) {
    return;
  }

  ListNode *fast = head;
  ListNode *slow = head;
  ListNode *prev = NULL;

  // find middle of list
  while (fast && fast->next) {
    fast = fast->next->next;
    prev = slow;
    slow = slow->next;
  }

  // for odd no. of elements
  if (fast) {
    slow = slow->next;
  }

  // now slow points to second half
  // prev points to first half

  ListNode *hs = reverseList(slow); // reversed second half of list
  ListNode *hf = head;

  while (hf && hs) {
    ListNode *temp1 = hf->next;
    hf->next = hs;
    hf = temp1;
    temp1 = hs->next;
    hs->next = hf;
    hs = temp1;
  }

  // next of tail to null
  if (hf != nullptr) {
    hf->next = nullptr;
  }

  return;
}

int main() {
  ListNode *y = new ListNode(5, nullptr);
  printData(y);

  vector<int> n = {2, 1, 4, 3, 5};

  ListNode *x = LLVector(n);
  printData(x);
  cout << " \n";

  printData(x);
  return 0;
}
