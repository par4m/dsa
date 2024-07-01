#include "bits/stdc++.h"

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
      while (temp2 != nullptr) {
        newList->next = temp2;
        temp2 = temp2->next;
      }
    } else {
      while (temp1 != nullptr) {
        newList->next = temp1;
        temp1 = temp1->next;
      }
    }

    // skip dummy head as its value is 0
    return TempList->next;
  };
};
