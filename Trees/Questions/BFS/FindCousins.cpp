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
  bool isCousins(TreeNode *root, int x, int y) {
    TreeNode *xx = findNode(root, x);
    TreeNode *yy = findNode(root, y);

    return ((level(root, xx, 0) == level(root, yy, 0)) &&
            (!isSibling(root, xx, yy)));
  }

  TreeNode *findNode(TreeNode *root, int x) {
    if (root == nullptr) {
      return nullptr;
    }
    if (root->val == x) {
      return root;
    }
    TreeNode *n = findNode(root->left, x);
    // found at left hand side
    if (n != nullptr) {
      return n;
    }
    // find into right hand side
    return findNode(root->right, x);
  }
  int level(TreeNode *root, TreeNode *node, int x) {
    if (root == nullptr) {
      return 0;
    }
    if (root == node) {
      return x;
    }
    int l = level(root->left, node, x + 1);
    if (l != 0) {
      return l;
    }
    return level(root->right, node, x + 1);
  }

  bool isSibling(TreeNode *root, TreeNode *xx, TreeNode *yy) {
    if (root == nullptr) {
      return false;
    }
    if (root->right == yy && root->left == xx ||
        root->right == xx && root->left == yy) {
      return true;
    }
    return isSibling(root->left, xx, yy) || isSibling(root->right, xx, yy);
  }
};
