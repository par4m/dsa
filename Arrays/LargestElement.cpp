
#include "iostream"

using namespace std;

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
  cout << arr[end];

  return 0;
}
