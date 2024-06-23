#include "bits/stdc++.h"

using namespace std;

int findPivotWithDuplicates(vector<int> &arr, int start, int end) {
  while (start <= end) {
    int mid = start + (end - start) / 2;

    // Case 1: arr[mid] > arr[mid+1]
    if (mid < end && arr[mid] > arr[mid + 1]) {
      return mid;

      // Case 2: arr[mid] < arr[mid-1]
    } else if (mid > start && arr[mid - 1] > arr[mid]) {
      return mid - 1;

    } // If middle, start , end are equal , skip duplicates.

    if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
      // first check if start is not pivot
      // if start > start + 1, it is pivot. => return
      if (arr[start] > arr[start + 1]) {
        return start; // return start as it is pivot
      }

      start++;

      // end -1 is pivot. end -1 > end => return end
      if (arr[end - 1] > arr[end]) {
        return end - 1;
      }

      // check if end is pivot
      // NOTE: what if these elements at start and end were the pivot
      end--;
    } else if (arr[start] < arr[mid] ||
               arr[start] == arr[mid] && arr[end] < arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {

  vector<int> v = {4, 5, 6, 7, 0, 1, 2};
  int pivot = findPivotWithDuplicates(v, 0, v.size() - 1);
  if (pivot == -1) {
    // not rotated
    cout << " Not rotated";

  } else {
    cout << pivot + 1;
  }

  return 0;
}
