#include <bits/stdc++.h>

using namespace std;

class BinaryTree {

public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) { this->value = value; }
};

void Populate(BinaryTree *&root) {
  cout << " Enter the root node value : ";
  int x;
  cin >> x;
  root = new BinaryTree(x);
  return;
}

void Insert(BinaryTree *&root) {
  cout << "\n Do you want to enter left of " << root->value;
  bool left;
  cin >> left;
  cout << " \n";
  if (left) {
    cout << "\n enter left of " << root->value << " : ";
    int x;
    cin >> x;
    root->left = new BinaryTree(x);
    Insert(root->left);
  }
  cout << "\n Do you want to enter right of " << root->value;
  bool right;
  cin >> right;
  cout << " \n";
  if (right) {
    cout << "\n enter right of " << root->value << " : ";
    int x;
    cin >> x;
    root->right = new BinaryTree(x);
    Insert(root->right);
  } else {
    return;
  }
}

void PrintTree(BinaryTree *&root) {
  if (root) {
    cout << root->value << " ";
    PrintTree(root->left);
    PrintTree(root->right);
  }
}

int main(int argc, char *argv[]) {
  BinaryTree *root;
  Populate(root);
  Insert(root);
  PrintTree(root);

  return 0;
}
