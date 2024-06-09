#include "iostream"

int First(int arr[], int target, int size) {

  int start = 0;
  int end = size - 1;
  int index = -1; // start

  while (start <= end) {

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      if (index == -1 || mid < index) {
        index = mid; // if found search in left only
        end = mid - 1;
      }
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return index;
}

int last(int arr[], int target, int size) {

  int start = 0;
  int end = size - 1;
  int index = -1; // start

  while (start <= end) {

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      if (index == -1 || mid > index) {
        index = mid; // if found search in left only
        start = mid + 1;
      }
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return index;
}

using namespace std;

int main(int argc, char *argv[]) {

  int arr[] = {5, 7, 7, 7, 7, 8, 8, 10};
  cout << First(arr, 7, 8);
  cout << last(arr, 7, 8);

  return 0;
}
