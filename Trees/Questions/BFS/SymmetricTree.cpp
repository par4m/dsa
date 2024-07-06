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

class Solution {
public:
  bool isSymmetric(TreeNode *root) {
    if (root == nullptr) {
      return false;
    }
    queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);

    while (!q.empty()) {
      // pop left and right
      TreeNode *left = q.front();
      q.pop();
      TreeNode *right = q.front();
      q.pop();
      // check if they are null
      if (left == nullptr && right == nullptr) {
        continue;
      }
      // if only one null return false
      if (left == nullptr || right == nullptr) {
        return false;
      }

      // if values are not equal
      if (left->val != right->val) {
        return false;
      }
      q.push(left->left);
      q.push(right->right);
      q.push(left->right);
      q.push(right->left);
    }
    return true;
  }
};
