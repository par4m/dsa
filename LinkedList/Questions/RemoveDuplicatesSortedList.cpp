#include "bits/stdc++.h"

using namespace std;
class ListNode {
public:
  int val;
  ListNode *next;

  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return head;
    }

    if (head->val == head->next->val) {
      ListNode *temp = head->next;
      while (temp != nullptr && temp->val == head->val) {
        temp = temp->next;
      }
      head->next = deleteDuplicates(temp);
    } else {
      head->next = deleteDuplicates(head->next);
    }

    return head;
  }
};

// Helper function to print the list
void printList(ListNode *head) {
  while (head != nullptr) {
    cout << head->val << " -> ";
    head = head->next;
  }
  cout << "nullptr" << endl;
}

int main() {
  ListNode *head = new ListNode(1);
  head->next = new ListNode(1);
  head->next->next = new ListNode(2);
  head->next->next->next = new ListNode(3);
  head->next->next->next->next = new ListNode(3);

  Solution solution;
  ListNode *newHead = solution.deleteDuplicates(head);
  printList(newHead); // Expected output: 1 -> 2 -> 3 -> nullptr

  return 0;
}
