#include <algorithm>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void SelectionSort(int index, vector<int> &arr, int n, int max) {
  if (n == 1) {
    return;
  }
  if (index < n - 1) {
    if (arr[index] < arr[max]) {
      max = index;
    }

    SelectionSort(index + 1, arr, n, max);
  } else {
    swap(arr[max], arr[index]);
    SelectionSort(0, arr, n - 1, 0);
  }
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 4, 5, 3};
  SelectionSort(0, arr, arr.size(), 0);
  for (int i : arr) {
    cout << i;
  }

  return 0;
}
