#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool primeOrNot(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {

      cout << n << " is Not Prime\n";
      return false;
    }
  }
  cout << n << " is Prime\n";
  return true;
}

// 1 = true
// 0 = false

int main(int argc, char *argv[]) {

  bool x = primeOrNot(13); // 1 prime 0 not prime
  cout << x;
  for (int i = 2; i < 40; i++) {
    primeOrNot(i);
  }

  return 0;
}
