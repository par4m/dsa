
// *****
// ****
// ***
// **
// *

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int n = 5;

  for (int i = 0; i < n; i++) {
    for (int j = n - i; j >= 1; j--) {
      cout << "*";
    }
    cout << " \n";
  }

  return 0;
}
