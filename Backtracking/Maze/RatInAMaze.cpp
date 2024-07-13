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

int main(int argc, char *argv[]) {
  cout << count(3, 3);
  return 0;
}
