
#include <iostream>
#include <vector>
using namespace std;

bool checkXSymmetry(const vector<vector<int>> &matrix, int n) {
  for (int i = 0; i < n / 2; ++i) {
    for (int j = 0; j < n; ++j) {
      if (matrix[i][j] != matrix[n - i - 1][j]) {
        return false;
      }
    }
  }
  return true;
}

bool checkYSymmetry(const vector<vector<int>> &matrix, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n / 2; ++j) {
      if (matrix[i][j] != matrix[i][n - j - 1]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Use vector for dynamic size allocation
    vector<vector<int>> matrix(n, vector<int>(n));

    // Read matrix input
    for (int i = 0; i < n; ++i) {
      string row;
      cin >> row;
      for (int j = 0; j < n; ++j) {
        matrix[i][j] =
            row[j] - '0'; // Convert character '0' or '1' to integer 0 or 1
      }
    }

    // Check both symmetries
    bool isSymmetric = checkXSymmetry(matrix, n) && checkYSymmetry(matrix, n);

    // Output the result
    if (isSymmetric) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }

  return 0;
}
