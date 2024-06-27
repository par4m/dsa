// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int n = 5;

  for (int i = 1; i < 2 * n; i++) {
    int col = 0;
    if (i > n) {
      col = n - (i - n);

    } else {
      col = i;
    }
    for (int j = 1; j <= col; j++) {
      cout << "*";
    }
    cout << " \n";
  }

  return 0;
}
