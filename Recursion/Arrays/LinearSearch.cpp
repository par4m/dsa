#include <bits/stdc++.h>

using namespace std;

int Linear(int arr[], int index, int target) {
  if (index == 8) {
    return -1;
  }

  if (arr[index] != target) {
    return Linear(arr, index + 1, target);
  }
  return index;
}

vector<int> LinearMultiple(vector<int> &arr, int index, int target,
                           vector<int> &indices) {

  if (index == arr.size()) {
    return indices;
  }

  if (arr[index] == target) {
    indices.push_back(index);
  }
  return LinearMultiple(arr, index + 1, target, indices);
}

vector<int> LinearMultipleOne(vector<int> &arr, int index, int target) {

  if (index == arr.size()) {
    return {};
  }

  vector<int> indices = LinearMultipleOne(arr, index + 1, target);

  if (arr[index] == target) {
    indices.push_back(index);
  }
  return indices;
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 4, 5, 6, 7, 8, 9};
  // cout << Linear(arr, 0, 11);

  vector<int> ar = {1, 2, 4, 5, 6, 7, 8, 8, 9, 8};
  vector<int> a;
  vector<int> b;
  a = LinearMultiple(ar, 0, 8, a);

  b = LinearMultipleOne(ar, 0, 8);
  for (int i : b) {
    cout << i;
  }

  return 0;
}
