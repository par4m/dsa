
#include "bits/stdc++.h"

using namespace std;

// An iterative binary search function.
int BinarySearch(int arr[], int x, int start, int end) {

  // Checking the sorted order of the given array
  bool isAsc = arr[start] < arr[end];
  while (start <= end) {
    int middle = start + (end - start) / 2;

    // Check if x is present at mid
    if (arr[middle] == x)
      return middle;

    // Ascending order
    if (isAsc == true) {

      // If x greater, ignore left half
      if (arr[middle] < x)
        start = middle + 1;

      // If x smaller, ignore right half
      else
        end = middle - 1;
    }

    // Descending order
    else {

      // If x smaller, ignore left half
      if (arr[middle] > x)
        start = middle + 1;

      // If x greater, ignore right half
      else
        end = middle - 1;
    }
  }

  // Element is not present
  return -1;
}
int search(int arr[], int peak, int target, int size) {

  int firstTry = BinarySearch(arr, target, 0, peak);
  if (firstTry != -1) {
    return firstTry;

  } else {
    int secondTry = BinarySearch(arr, target, peak + 1, size);

    return secondTry;
  }

  return -1;
}

int main(int argc, char *argv[]) {
  int start = 0;
  int end = 5;

  int arr[] = {1, 2, 3, 4, 5, 6, 4, 2, 1};

  while (start < end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid + 1]) {
      // in decreasing part of array, maybe be ans but look left
      // thats why end != mid -1
      end = mid;

      // ascending part of array, mid+1 > mid obv
    } else if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    }
  }
  // in the end start = end = largest num
  // start and end are always trying to find max in the above 2 checks
  // hence when they are pointing to just max one
  int peak = end;
  int size = sizeof(arr) / sizeof(arr[0]);
  int x = search(arr, peak, 5, size);

  cout << x;

  return 0;
}
