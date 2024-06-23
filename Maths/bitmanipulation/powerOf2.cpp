#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int n = 64;
  if ((n & (n - 1)) == 0) {
    cout << " Power of 2 ";
  }

  return 0;
}
