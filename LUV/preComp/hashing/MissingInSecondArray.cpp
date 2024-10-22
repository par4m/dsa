#include "bits/stdc++.h"
#include <unordered_map>

using namespace std;

vector<int> findMissing(int a[], int b[], int n, int m) {
  vector<int> miss;

  unordered_map<int, int> ma;

  for (int i = 0; i < m; i++) {
    ma[b[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (ma[a[i]] == 0) {
      miss.push_back(a[i]);
    }
  }

  return miss;
}

int main(int argc, char *argv[]) {

  int n, m;
  cin >> n >> m;
  int arr[n];
  int arr2[m];

  unordered_map<int, int> a;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  return 0;
}
