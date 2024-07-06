
#include <bits/stdc++.h>
#include <cmath>
#include <queue>
#include <valarray>

using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;
  int height;

  BST(int value) {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void Populate(BST *&root) {
  cout << "Enter the root node value: ";
  int x;
  cin >> x;
  root = new BST(x);
}

void Insert(BST *&root, int data) {
  if (root == nullptr) {
    root = new BST(data);
    return;
  }

  if (data > root->value) {
    Insert(root->right, data);
  } else {
    Insert(root->left, data);
  }
}

void PrintTree(BST *root, string details = "") {
  if (root == nullptr) {
    return;
  }
  cout << details << root->value << "\n";
  PrintTree(root->left, "Left child of " + to_string(root->value) + ": ");
  PrintTree(root->right, "Right child of " + to_string(root->value) + ": ");
}

int Height(BST *root, int height) {
  if (root == nullptr) {
    return -1;
  }
  int left = Height(root->left, height + 1);
  int right = Height(root->right, height + 1);

  if (left > right) {
    return left + 1;
  }
  return right + 1;
}

bool balanced(BST *root) {
  if (root == nullptr) {
    return true;
  }
  return abs(Height(root->left, 0)) - abs(Height(root->right, 0)) &&
         balanced(root->left) && balanced(root->right);
}

void populateSorted(BST *&root, int nums[], int start, int end) {
  if (start >= end) {
    return;
  }
  int mid = (start + end) / 2;
  Insert(root, nums[mid]);
  // insert mid as root

  populateSorted(root, nums, start, mid);
  populateSorted(root, nums, mid + 1, end);
}

void PreOrder(BST *root) {
  if (root) {
    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);
  }
}

void PostOrder(BST *root) {
  if (root) {
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";
  }
}

void InOrder(BST *root) {
  if (root) {
    InOrder(root->left);
    cout << root->value << " ";
    InOrder(root->right);
  }
}

int levelOrderSuccessor(BST *root, int ele) {
  if (root == nullptr) {
    return -1;
  }
  queue<BST *> q;

  q.push(root);
  int x = 0;

  while (!q.empty()) {
    // current level
    BST *curr = q.front();
    q.pop();

    if (curr->left) {
      q.push(curr->left);
    }
    if (curr->right) {
      q.push(curr->right);
    }

    if (curr->value == ele) {
      return q.front()->value;
    }
  }

  return -1;
}
int main(int argc, char *argv[]) {

  BST *root = nullptr; // Initialize root to nullptr
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  populateSorted(root, arr, 0, sizeof(arr) / sizeof(arr[0]));
  // Populate(root);

  // Inserting nodes
  // Insert(root, 5);
  // Insert(root, 7);
  // Insert(root, 3);
  // Insert(root, 8);
  //
  // Print the tree
  cout << "Tree structure:\n";

  cout << "\n PreOrder \n ";
  PreOrder(root);
  cout << "\n PostOrder \n ";
  PostOrder(root);
  cout << "\n InOrder \n ";
  cout << endl;

  vector<vector<int>> level = levelOrder(root);

  // root->height = Height(root, 0);
  // cout << root->height;
  //
  return 0;
}
