#include <iostream>

using namespace std;

int BinarySearch(int arr[], int target, int start, int end) {

  if (start > end) {
    return -1;
  }
  int mid = start + (end - start) / 2;

  if (arr[mid] == target) {
    return mid;
  }
  if (arr[mid] > target) {
    return BinarySearch(arr, target, 0, mid - 1);
  } else {

    return BinarySearch(arr, target, mid + 1, end);
  }
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 3, 5, 8, 9};
  cout << BinarySearch(arr, 10, 0, 5);

  return 0;
}
