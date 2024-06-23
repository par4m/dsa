#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> arr = {4, 3, 5, 1, 2};

  for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i : arr) {
    cout << i << " ";
  }

  return 0;
}
