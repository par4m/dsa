#include "bits/stdc++.h"

// Merge Sort

using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *sortList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return head; // sorted
    }

    ListNode *mid = findMidAndSplit(head);
    ListNode *left = sortList(head);
    ListNode *right = sortList(mid);

    return mergeTwoLists(left, right);
  }

  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *TempList = new ListNode();
    ListNode *newList = TempList;
    ListNode *temp1 = list1;
    ListNode *temp2 = list2;

    while (temp1 != nullptr && temp2 != nullptr) {
      if (temp1->val < temp2->val) {
        newList->next = temp1;
        temp1 = temp1->next;
      } else {
        newList->next = temp2;
        temp2 = temp2->next;
      }
      newList = newList->next;
    }

    // in case either turns null
    if (temp1 == nullptr) {
      newList->next = temp2;
    } else {
      newList->next = temp1;
    }

    // skip dummy head as its value is 0
    return TempList->next;
  };

  ListNode *findMidAndSplit(ListNode *head) {
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
};
