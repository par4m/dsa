#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {

  int t;
  cin >> t;
  while (t--) {
    int n;
    long long prod = 1;
    cin >> n; // number of integers
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x; // take n inputs and put into x
      prod *= x;
    }
    int y = prod % 10;
    if (y == 2 || y == 3 || y == 5) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }

  return 0;
}
