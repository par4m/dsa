#include <functional>
#include <iostream>

using namespace std;

int BinSearch(int arr[], int element, int start, int end) {

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

int findPivot(int arr[], int start, int end) {

  while (start <= end) {
    int mid = start + (end - start) / 2;

    // Case 1 : arr[mid] > arr[mid+1]
    // edge case: mid = last index of array
    // arr[mid + 1] => out of bounds
    if (mid < end && arr[mid] > arr[mid + 1]) {
      return mid;

      // Case 2: arr[mid] < arr[mid - 1]
      // edge case if mid = start, mid -1 will be out of bounds
    } else if (mid > start && arr[mid - 1] > arr[mid]) {
      return mid - 1;

      // Case 3:: arr[mid] <= arr[start] ;; all elements after mid are smaller
      // than start so ignore all elements smaller than start.
    } else if (arr[mid] <= arr[start]) {
      end = mid - 1;
    }

    // Case 4:: start < mid :: sorted array, look to right of mid
    else if (arr[start] < arr[mid]) {
      start = mid + 1;
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {

  int arr[7] = {4, 5, 6, 7, 0, 1, 2};

  int pivot = findPivot(arr, 0, 6);
  cout << pivot; // print pivot
  int target = 0;

  // search right
  int size = sizeof(arr) / sizeof(arr[0]);

  if (pivot == -1) {
    // not rotated
    // do normal binarySearch
    return BinSearch(arr, target, 0, size - 1);
  } else if (arr[pivot] == target) {
    return pivot; // target is pivot
  } else if (target > arr[0]) {
    // end = pivot - 1;
    return BinSearch(arr, target, 0, pivot - 1);
  } else if (target < arr[0]) {
    // end = pivot - 1;
    return BinSearch(arr, target, pivot + 1, size - 1);
  } else {
    return -1;
  }

  return 0;
}
