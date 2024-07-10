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
  void flatten(TreeNode *root) {
    if (root == nullptr) {
      return;
    }
    TreeNode *current = root;

    if (current->left) {
      TreeNode *temp = current->left;
      while (temp->right != nullptr) {
        temp = temp->right;
      }
      temp->right = current->right;
      current->right = current->left;
      current->left = nullptr;
    }
    flatten(root->left);
    flatten(root->right);
  }
};
