#include <iostream>

// *
// **
// ***
// ****
// *****

using namespace std;

void printN(int n) {

  if (n == 0) {
    return;
  }

  printN(--n);
  for (int i = 0; i <= n; i++) {
    cout << "*";
  }
  cout << " \n";
}

int main(int argc, char *argv[]) {
  printN(5);
  return 0;
}
