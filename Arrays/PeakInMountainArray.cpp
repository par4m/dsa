#include "bits/stdc++.h"

using namespace std;
int main(int argc, char *argv[]) {

  int arr[];

  int start = 0;
  int end = arr.size() - 1;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

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

  return end;

  return 0;
}
