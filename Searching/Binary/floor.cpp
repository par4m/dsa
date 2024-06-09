#include "iostream"

using namespace std;

int ceiling(int arr[], int target, int end) {

  int start = 0;
  int mid;

  while (start <= end - 1) {

    int mid = start + (end - start) / 2;

    if (target > arr[end - 1]) {
      return -1;
    }

    if (start == end) {
      cout << arr[mid];
    }

    if (arr[mid] == target) {
      return mid;
    }

    else if (arr[mid] < target) {
      start = mid + 1;

    } else {
      end = mid - 1;
    }
  }

  return end; // ceiling
}

int main(int argc, char *argv[]) {

  int arr[] = {2, 3, 5, 9, 14, 16, 18};

  int x = ceiling(arr, 2, 7);
  cout << x;

  return 0;
}
