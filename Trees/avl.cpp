
#include <algorithm>
#include <iostream>

using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int value) {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
  }
};

int Height(BST *node) {
  if (node == nullptr) {
    return 0;
  }
  return max(Height(node->left), Height(node->right)) + 1;
}

int getBalance(BST *node) {
  if (node == nullptr) {
    return 0;
  }
  return Height(node->left) - Height(node->right);
}

BST *leftRotate(BST *x) {
  BST *y = x->right;
  BST *T2 = y->left;

  // Perform rotation
  y->left = x;
  x->right = T2;

  return y;
}

BST *rightRotate(BST *y) {
  BST *x = y->left;
  BST *T2 = x->right;

  // Perform rotation
  x->right = y;
  y->left = T2;

  return x;
}

BST *Insert(BST *node, int value) {
  // Standard BST insert
  if (node == nullptr) {
    return new BST(value);
  }

  if (value < node->value) {
    node->left = Insert(node->left, value);
  } else if (value > node->value) {
    node->right = Insert(node->right, value);
  } else {
    // Duplicate values are not allowed in BST
    return node;
  }

  // Get the balance factor of this ancestor node to check whether
  // this node became unbalanced
  int balance = getBalance(node);

  // If this node becomes unbalanced, then there are 4 cases

  // Left Left Case
  if (balance > 1 && value < node->left->value) {
    return rightRotate(node);
  }

  // Right Right Case
  if (balance < -1 && value > node->right->value) {
    return leftRotate(node);
  }

  // Left Right Case
  if (balance > 1 && value > node->left->value) {
    node->left = leftRotate(node->left);
    return rightRotate(node);
  }

  // Right Left Case
  if (balance < -1 && value < node->right->value) {
    node->right = rightRotate(node->right);
    return leftRotate(node);
  }

  return node;
}

void PreOrder(BST *root) {
  if (root != nullptr) {
    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);
  }
}

void PostOrder(BST *root) {
  if (root != nullptr) {
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";
  }
}

void InOrder(BST *root) {
  if (root != nullptr) {
    InOrder(root->left);
    cout << root->value << " ";
    InOrder(root->right);
  }
}

int main() {
  BST *root = nullptr;

  for (int i = 1; i < 1000; i++) {
    root = Insert(root, i);
  }

  cout << "Height of AVL tree: " << Height(root) << endl;
}
