#include <iostream>

// *****
// ****
// ***
// **
// *

using namespace std;

void printN(int n) {

  if (n == 1) {
    cout << "*";
    return;
  }

  for (int i = 0; i < n; i++) {
    cout << "*";
  }
  cout << " \n";

  printN(--n);
}

int main(int argc, char *argv[]) {
  printN(5);
  return 0;
}
