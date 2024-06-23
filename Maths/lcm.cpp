#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {

  if (a == 0) {
    return b;
  }
  return gcd(b % a, a);
}

int lcm(int a, int b) { return a * b / (gcd(a, b)); }

int main(int argc, char *argv[]) {

  cout << lcm(2, 7);

  return 0;
}
