#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int min = 0;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] < k) {
        min = max(k - arr[i], min);
      }
    }

    cout << min << "\n";
  }

  return 0;
}
