#include "bits/stdc++.h"

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode *next) : val(val), next(next) {}
};

// Where does it start
class Solution {
public:
  int cycleLength(ListNode *head) {

    if (head == nullptr) {
      return 0;
    }

    ListNode *s = head;
    ListNode *f = head;

    while (f != nullptr && f->next != nullptr) {
      f = f->next->next;
      s = s->next;

      if (f == s) {
        int ctr = 1;
        s = s->next;
        while (f != s) {
          s = s->next;
          ctr++;
        }

        return ctr;
      }
    }

    return 0; // No cycle
  }

  ListNode *detectCycle(ListNode *head) {
    ListNode *temp = nullptr;
    int x = cycleLength(head);
    if (x == 0) {
      return nullptr; // no cycle
    } else {
      ListNode *f = head;
      ListNode *s = head;
      // Move s ahead by length of cycle times
      while (x > 0) {
        s = s->next;
        x--;
      }
      // Now keep moving until both are equal
      while (f != s) {
        f = f->next;
        s = s->next;
      }
      temp = s; // start of cycle
    }

    return temp;
  }
};

void printList(ListNode *head) {
  ListNode *temp = head;
  while (temp != nullptr) {
    std::cout << temp->val << " -> ";
    temp = temp->next;
  }
  std::cout << "nullptr" << std::endl;
}

int main() {
  // Create a linked list: 3 -> 2 -> 0 -> -4 (cycle back to node with val 2)
  ListNode *node4 = new ListNode(-4);
  ListNode *node3 = new ListNode(0, node4);
  ListNode *node2 = new ListNode(2, node3);
  ListNode *node1 = new ListNode(3, node2);
  node4->next = node2; // Create cycle

  Solution solution;
  int cycle_len = solution.cycleLength(node1);
  std::cout << "Cycle length: " << cycle_len << std::endl; // Expected output: 3

  // Create another linked list: 1 -> 2 (cycle back to node with val 1)
  ListNode *nodeB2 = new ListNode(2);
  ListNode *nodeB1 = new ListNode(1, nodeB2);
  nodeB2->next = nodeB1; // Create cycle

  cycle_len = solution.cycleLength(nodeB1);
  std::cout << "Cycle length: " << cycle_len << std::endl; // Expected output: 2

  // Create another linked list: 1 -> nullptr (no cycle)
  ListNode *nodeC1 = new ListNode(1);

  cycle_len = solution.cycleLength(nodeC1);
  std::cout << "Cycle length: " << cycle_len << std::endl; // Expected output: 0

  // Free the allocated memory (simple cleanup for the example)
  delete node4;
  delete node3;
  delete node2;
  delete node1;
  delete nodeB2;
  delete nodeB1;
  delete nodeC1;

  return 0;
}
