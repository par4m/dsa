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

void rotate(vector<int> &nums, int k) {}

void reverse(vector<int> &arr, int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

class Solution {
public:
  void reverse(vector<int> &arr, int start, int end) {
    while (start < end) {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
  }

  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    if (n == 0)
      return; // Edge case: empty array

    k = k % n; // Handle cases where k > n
    if (k == 0)
      return; // No need to rotate if k is 0 after modulo operation

    // Reverse the entire array
    reverse(nums, 0, n - 1);

    // Reverse the first k elements
    reverse(nums, 0, k - 1);

    // Reverse the rest of the array
    reverse(nums, k, n - 1);
  }
};

int main() {
  int n = 5;

  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, n);

  vector<pair<string, int>> a = {{"hello", 1}, {}};
}
