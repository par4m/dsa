
#include "bits/stdc++.h"
using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  // Apply modulo 100 step by step
  long long result = (a % 100) * (b % 100) % 100;
  result = (result * (c % 100)) % 100;
  result = (result * (d % 100)) % 100;

  // Print the result with leading zero if necessary
  printf("%02lld\n", result);

  return 0;
}
