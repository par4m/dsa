#include "bits/stdc++.h"
using namespace std;

void swap(vector<int> &c, int index1, int index2) {
  int temp = c[index1];
  c[index1] = c[index2];
  c[index2] = temp;
}

vector<int> insertionSort(vector<int> &arr) {
  for (int i = 0; i <= arr.size() - 2; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] >= arr[j - 1]) {
        break;
      } else {
        swap(arr, j, j - 1);
      }
    }
  }

  return arr;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {4, 3, 5, 2, 1};

  arr = insertionSort(arr);

  for (int i : arr) {
    cout << i << " ";
  }

  return 0;
}
