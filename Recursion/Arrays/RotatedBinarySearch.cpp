#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int arr[], int target, int start, int end) {
  int mid = start + (end - start) / 2;

  if (start > end) {
    return -1;
  }

  if (arr[mid] == target) {
    return mid;
  }
  if (arr[start] <= arr[mid]) { // first half sorted
    // lies in first half
    if (target <= arr[mid] && target >= arr[start]) {
      return BinarySearch(arr, target, start, mid - 1);
    } else {
      // lies in second half
      return BinarySearch(arr, target, mid + 1, end);
    }
  } else if (arr[end] >= arr[mid]) { // second half sorted
    if (target >= mid && target <= arr[end]) {
      return BinarySearch(arr, target, mid + 1, end);
    } else {
      // first half
      return BinarySearch(arr, target, start, mid - 1);
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {

  int arr[] = {5, 6, 1, 2, 3, 4};
  cout << BinarySearch(arr, 4, 0, 5);

  return 0;
}
