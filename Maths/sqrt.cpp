#include <bits/stdc++.h>

using namespace std;

double squrt(int n, int p) {
  int start = 0;
  int end = n;

  double root = 0.0;

  // find integer value first

  int mid;
  while (start <= end) {

    mid = start + (end - start) / 2;
    if (mid * mid == n) {
      return mid; // perfect square
    } else if (mid * mid > n) {
      end = mid - 1; // lies on left side

    } else {
      start = mid + 1; // m*m < n
    }
  }

  // make root as the int value
  root = end;
  double incr = 0.1;

  for (int i = 0; i < p; i++) {
    while (root * root <= n) {
      root += incr;
    }

    root -= incr;
    incr /= 10;
  }

  // when it breaks go back

  return root;
}

int main(int argc, char *argv[]) {

  int n = 40;
  int p = 3; // precision

  cout << squrt(n, p);

  return 0;
}
