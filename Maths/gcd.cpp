#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {

  if (a == 0) {
    return b;
  }
  return gcd(b % a, a);
}

int main(int argc, char *argv[]) {

  cout << gcd(4, 8);

  return 0;
}
