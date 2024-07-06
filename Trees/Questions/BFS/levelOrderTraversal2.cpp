/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

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
  vector<vector<int>> levelOrderBottom(TreeNode *root) {
    vector<vector<int>> result;
    if (root == nullptr) {
      return result;
    }

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
      // get size of each level
      int size = q.size();
      // create new vector for each level to push to result vector
      vector<int> level;

      for (int i = 0; i < size; i++) {
        TreeNode *curr = q.front();
        q.pop();
        level.push_back(curr->val);
        if (curr->left) {
          q.push(curr->left);
        }
        if (curr->right) {
          q.push(curr->right);
        }
      }
      result.insert(result.begin(), level);
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
