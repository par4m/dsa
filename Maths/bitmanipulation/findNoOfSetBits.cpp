#include "bits/stdc++.h"

using namespace std;

int setBits(int n) {

  int count = 0;

  while (n > 0) {
    count++;
    // n -= (n & -n);
    n = n & (n - 1);
  }

  return count;
}

int main(int argc, char *argv[]) {

  int n = 9;

  cout << bitset<8>(n) << " \n"; // binary representation

  int ctr = 0;
  while (n > 0) {
    if (n & 1) {
      ctr++;
    }
    n = n >> 1;
  }
  cout << ctr << " \n";
  n = 9;

  // method 2 :: n - (n&(-n))
  cout << setBits(n);

  return 0;
}
