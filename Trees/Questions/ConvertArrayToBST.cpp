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
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    TreeNode *root = nullptr;
    arrayBST(root, nums, 0, nums.size());
    return root;
  }

  void Insert(TreeNode *&root, int data) {
    if (root == nullptr) {
      root = new TreeNode(data);
      return;
    }

    if (data > root->val) {
      Insert(root->right, data);
    } else {
      Insert(root->left, data);
    }
  }

  void arrayBST(TreeNode *&root, vector<int> &arr, int start, int end) {
    if (start >= end) {
      return;
    }
    int mid = (start + end) / 2;
    Insert(root, arr[mid]);
    arrayBST(root, arr, start, mid);
    arrayBST(root, arr, mid + 1, end);
  }
};
