#include <bits/stdc++.h>
#include <vector>

using namespace std;

void QuickSort(vector<int> &arr, int low, int high) {
  if (low >= high) {
    return;
  }

  int s = low;
  int e = high;
  int m = s + (e - s) / 2;

  int pivot = arr[m]; // taking pivot as mid

  // condition for swapping

  // Putting Pivot in Correct Position

  while (s <= e) {
    // also a reason if its already sorted it will not swap unlike MergeSort
    // thats why it is prefrrered

    // left is less than pivot keep moving forward
    while (arr[s] < pivot) {
      s++;
    }
    // violation occurs, start is greater than pivot
    // right is more than pivot keep moving backward
    while (arr[e] > pivot) {
      e--;
    }
    // violation occurs, swap with start(end is smaller than pivot)
    // Swapping will solve both violations, smaller number will be to the left
    // and greater will be to the right.
    if (s <= e) {
      swap(arr[s], arr[e]);
      s++;
      e--;
    }
  }

  // Now pivot is at Correct Index, sort rest of the two halves now
  QuickSort(arr, low, e);
  QuickSort(arr, s, high);
}

int main(int argc, char *argv[]) {

  vector<int> arr = {5, 4, 3, 2, 1};
  QuickSort(arr, 0, arr.size() - 1);
  for (int i : arr) {
    cout << i;
  }

  return 0;
}
