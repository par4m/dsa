/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node *connect(Node *root) {
    if (root == nullptr) {
      return root;
    }
    queue<Node *> q;

    q.push(root);

    while (!q.empty()) {
      // current level size
      int size = q.size();

      // connect only till current level is empty
      for (int i = 0; i < size; i++) {

        Node *curr = q.front();
        q.pop();

        if (i < size - 1) {
          curr->next = q.front();
        } else {
          curr->next = nullptr;
        }

        if (curr->left) {
          q.push(curr->left);
        }
        if (curr->right) {
          q.push(curr->right);
        }
      }
    }
    return root;
  }
};

// Optimised
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node *connect(Node *root) {
    if (root == nullptr) {
      return nullptr;
    }
    Node *leftmost = root;
    while (leftmost->left != nullptr) {
      Node *current = leftmost;

      while (current != nullptr) {
        current->left->next = current->right;

        if (current->next != nullptr) {
          current->right->next = current->next->left;
        }
        current = current->next;
      }

      // level is over

      leftmost = leftmost->left;
    }
    return root;
  }
};
