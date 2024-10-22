#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int a[n][n];
    a[0][0] = 1;

    for (int i = 2; i <= n; i++) {
      a[i][0] = 1;
      a[i][i - 1] = 1;
    }
  }

  return 0;
}
