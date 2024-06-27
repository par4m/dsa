//    *
//   ***
//   ****
//  *****
//  ****
//  ***
//   **
//    *

#include <iostream>

using namespace std;

void printSpace(int n) {
  for (int i = 0; i < n; i++) {
    cout << " ";
  }
}

int main(int argc, char *argv[]) {

  int n = 5;

  for (int i = 1; i < 2 * n; i++) {
    int col;
    if (i > n) {

      col = 2 * n - i;
    }
    if (i <= n) {
      col = i;
    }
    int spaces = n - col;

    printSpace(spaces);
    for (int j = 1; j <= col; j++) {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
