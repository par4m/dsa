#include "bits/stdc++.h"

using namespace std;

int BinSearch(int arr[], int element, int size) {
  int start = 0;
  int end = size - 1;

  while (start <= end) {

    int mid = start + (end - start) / 2;

    if (arr[mid] == element) {
      return mid;

    } else if (element > arr[mid]) {
      start = mid + 1;

    } else {
      end = mid - 1;
    }
  }
  return -1;
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 5, 23, 45, 56};

  int x = BinSearch(arr, 456, 5);
  cout << x;

  return 0;
}
