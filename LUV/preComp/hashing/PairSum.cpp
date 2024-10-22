#include "bits/stdc++.h"
#include <unordered_map>

using namespace std;

int main(int argc, char *argv[]) {

  int n, s;
  cin >> n >> s;
  int arr[n];
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mp[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    int diff = s - arr[i];
    if (mp[diff]) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}
