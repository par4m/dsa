
#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {

  int n = 10100;
  for (int i = 0; i < 5; i++) {
    if ((n & (1 << (i)))) {
      cout << i;
      break;
    }
  }

  cout << log2(n & (-n));

  return 0;
}
