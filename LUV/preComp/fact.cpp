#include "bits/stdc++.h"
// given T test cases and in each test case a number N. Prin its factorial for
// each test case % M where M = 10^9+7
//
//
//
//

using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main(int argc, char *argv[]) {
  fact[0] = fact[1] = 1;

  for (int i = 2; i < N; i++) {
    fact[i] = (fact[i - 1] * i) % M;
  }
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << fact[n] << "\n";
  }

  return 0;
}
