#include "bits/stdc++.h"
// Given array a of N integers. Given Q queries and in each query given a number
// X, print count of that number in array
//  1 <= N <= 10^5
//  1 <= a[i]  <= 10^7
//  1 <= Q <= 10^5
//
const int N = 1e7 + 10;

int b[N]; // 0 initialised by default
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int a[n];
  // unordered_map<int, int> b;
  // vector<int> b(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    // int ct = 0;
    // for (int i = 0; i < n; i++) {
    //   if (a[i] == x) {
    //     ct++;
    //   }
    // }
    cout << b[x] << "\n";
  }
  return 0;
}
