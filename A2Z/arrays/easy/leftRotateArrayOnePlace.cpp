#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {

    for (int i = 0; i < nums.size(); i++) {
    }
  }
};

void solve(int arr[], int n) {
  int temp = arr[0];

  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;

  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << " \n";
}

int main() {
  int n = 5;

  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, n);
}
