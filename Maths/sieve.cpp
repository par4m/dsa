#include "bits/stdc++.h"
#include <vector>

using namespace std;

void sieve(int n, vector<bool> &primes) {

  for (int i = 2; i <= sqrt(n); i++) {
    // initially all are false, false in array means number is prime lets take
    // that
    // make multiples of that number to True
    // True == Not Prime
    if (primes[i] == false) {
      // turn all multiples to True
      for (int j = 2 * i; j <= n; j += i) {
        primes[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {

    if (!primes[i]) {
      cout << i << " \n";
    }
  }
}
// void markMultiples(vector<int> &arr) {}

int main(int argc, char *argv[]) {
  int n = 40;
  vector<bool> arr(n + 1);
  sieve(n, arr);

  return 0;
}
