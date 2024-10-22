#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long a, b, c;
  cin >> a >> b >> c;
  vector<int> arr(3, 0);
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  vector<int> cp = arr;
  sort(arr.begin(), arr.end());
  for (int i : arr) {
    cout << i << "\n";
  }
  cout << "\n";
  for (int i : cp) {
    cout << i << "\n";
  }

  return 0;
}
