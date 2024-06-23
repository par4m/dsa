#include <bits/stdc++.h>
#include <vector>

using namespace std;

// 0 to a
int toAxor(int a) {
  if (a % 4 == 0) {
    return a;
  }

  if (a % 4 == 1) {
    return 1;
  }
  if (a % 4 == 2) {
    return a + 1;
  }

  return 0;
}

void rangeXor(int a, int b) {

  // a,b = xor(b) ^ xor(a-1)
  int ans = toAxor(b) ^ toAxor(a - 1);
  cout << ans;
}

int main(int argc, char *argv[]) {

  //

  rangeXor(3, 9);

  return 0;
}
