#include "bits/stdc++.h"

using namespace std;

long long f(int n) {
  long long result = 0;
  for (int i = 1; i <= n; i++) {
    result += n % i;
  }

  return result;
}

int main(int argc, char *argv[]) {

  long long x, y;
  cin >> x >> y;

  long long prevf = f(x - 1);
  long long sum = 0;

  for (int i = x; i <= y; i++) {
    long long curf = f(i);
    if (curf == prevf) {
      sum += i;
    }
    prevf = curf;
  }
  cout << sum;

  return 0;
}
