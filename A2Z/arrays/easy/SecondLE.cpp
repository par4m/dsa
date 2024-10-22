
#include <bits/stdc++.h>

using namespace std;

void getElementsModerate(int arr[], int n) {

  int small = INT_MAX;
  int big = INT_MIN;

  // get max and min element in first pass

  for (int i = 0; i < n; i++) {
    small = min(small, arr[i]);
    big = max(big, arr[i]);
  }
  // second pass find element just smaller than the greatest element
  // second pass find element just bigger than the smallest element
  //
  //
  int sec_small = INT_MAX;
  int sec_large = INT_MIN;
  for (int i = 0; i < n; i++) {

    if (arr[i] < sec_small && arr[i] != small) {
      sec_small = arr[i];
    }
    if (arr[i] > sec_large && arr[i] != big) {
      sec_large = arr[i];
    }
  }

  cout << small << " " << sec_small << " \n";
  cout << big << " " << sec_large << " \n";
}

void getElemets(int arr[], int n) {
  int large, sec_large = INT_MIN;
  int small, sec_small = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (arr[i] > large) {
      sec_large = large;
      large = arr[i];
    }
    if (arr[i] > sec_large && arr[i] != large) {
      sec_large = arr[i];
    }
    if (arr[i] < small) {
      sec_small = small;
      small = arr[i];
    }
    if (arr[i] < sec_small && arr[i] != small) {
      sec_small = arr[i];
    }
  }

  cout << large << " " << sec_large << " \n";
  cout << small << " " << sec_small << "\n";
}

int main() {
  int arr[] = {1, 2, 4, 6, 7, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  getElementsModerate(arr, n);
  getElemets(arr, n);
  return 0;
}
