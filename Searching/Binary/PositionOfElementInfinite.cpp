// Position of Element in Infinite Sorted Array

#include "iostream"

using namespace std;

int *findingRange(int *arr, int arr1[], int target) {

  int start = 0;
  int end = 1;
  int box = 2;

  while (target > arr1[end]) {

    start = end + 1;
    end = box * 2 + end;
  }

  arr[0] = start;
  arr[1] = end;

  return arr;
}

int BinSearch(int arr[], int target, int start, int end) {

  while (start <= end) {

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      return mid;

    } else if (arr[mid] > target) {
      end = mid - 1;

    } else {
      start = mid + 1;
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 15, 20, 23, 30};
  int arr2[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 15, 20, 23, 30};
  int x;
  int *range;
  int arrTemp[2];
  int target = 10;
  range = findingRange(arrTemp, arr2, target);
  // cout << range[0];
  // once range found

  x = BinSearch(arr, target, range[0], range[1]);
  cout << x;

  return 0;
}
