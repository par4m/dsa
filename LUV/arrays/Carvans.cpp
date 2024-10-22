#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {

  ios_base::sync_with_stdio(false); // Fast input/output
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int ctr = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
      if (arr[i] <= min) {
        ctr++;
        min = arr[i];
      }
    }
    cout << ctr << "\n";
  }

  return 0;
}
