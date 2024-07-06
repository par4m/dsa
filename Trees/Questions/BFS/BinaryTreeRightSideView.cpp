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
  vector<int> rightSideView(TreeNode *root) {
    vector<int> res;
    if (root == nullptr) {
      return res;
    }
    queue<TreeNode *> q;

    q.push(root);

    while (!q.empty()) {
      // current level size
      int size = q.size();

      // connect only till current level is empty
      for (int i = 0; i < size; i++) {

        TreeNode *curr = q.front();
        q.pop();

        if (i == size - 1) {
          res.push_back(curr->val);
        }
        if (curr->left) {
          q.push(curr->left);
        }
        if (curr->right) {
          q.push(curr->right);
        }
      }
    }
    return res;
  }
};
