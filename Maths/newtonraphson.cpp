
#include <bits/stdc++.h>

using namespace std;

double newton(double n) {

  int x = n; // initially

  double root;
  while (true) {
    root = 0.5 * (x + (n / x));
    if (abs(root - x) < 1) {
      break;

    } else {
      x = root;
    }
  }

  return root;
}

int main(int argc, char *argv[]) {
  cout << newton(40);

  return 0;
}
