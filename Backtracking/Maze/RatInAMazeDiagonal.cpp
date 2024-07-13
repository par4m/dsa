#include <bits/stdc++.h>
using namespace std;

int count(int r, int c) {
  if (r == 1 || c == 1) {
    return 1;
  }

  int left = count(r - 1, c);
  int right = count(r, c - 1);

  return left + right;
}

void path(string processed, int r, int c) {

  if (r == 1 && c == 1) {
    cout << processed << "\n";
    return;
  }

  if (r > 1 && c > 1) {
    // diagonal
    path(processed + "D", r - 1, c - 1);
  }

  if (r > 1) {
    // Down
    path(processed + "V", r - 1, c);
  }
  if (c > 1) {

    // Right
    path(processed + "H", r, c - 1);
  }
}

int main(int argc, char *argv[]) {
  path("", 3, 3);
  return 0;
}
