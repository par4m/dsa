#include <deque>
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    vector<vector<int>> result;
    if (root == nullptr) {
      return result;
    }

    deque<TreeNode *> deck;
    deck.push_back(root);
    bool reverse = false;

    while (!deck.empty()) {
      vector<int> curr;
      int size = deck.size();
      for (int i = 0; i < size; ++i) {
        if (reverse) {
          TreeNode *current = deck.back();
          deck.pop_back();
          curr.push_back(current->val);
          if (current->right) {
            deck.push_front(current->right);
          }
          if (current->left) {
            deck.push_front(current->left);
          }
        } else {
          TreeNode *current = deck.front();
          deck.pop_front();
          curr.push_back(current->val);
          if (current->left) {
            deck.push_back(current->left);
          }
          if (current->right) {
            deck.push_back(current->right);
          }
        }
      }
      result.push_back(curr);
      reverse = !reverse;
    }

    return result;
  }
};

int main() {
  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);

  Solution sol;
  vector<vector<int>> result = sol.zigzagLevelOrder(root);

  for (const auto &level : result) {
    for (int val : level) {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}
