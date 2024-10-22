#include "bits/stdc++.h"
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    long long out = 0;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      arr[i] = c - '0';
    }
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
      out += arr[i] * pow(2, j);
      j++;
    }
    cout << out << "\n";
  }

  return 0;
}
