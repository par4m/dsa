#include <bits/stdc++.h>

using namespace std;

vector<int> countSortHash(vector<int> &arr) {

  if (arr.size() == 0 || arr.size() <= 1) {

    return arr;
  }

  // find max element

  int max = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  // count array creation
  vector<int> arr2(max + 1, 0);

  // freq array : for every num in original array
  for (int x : arr) {
    arr2[x]++;
  }
  int index = 0;
  for (int j = 0; j <= max; j++) {
    while (arr2[j] > 0) {
      // put index in the original array as freq index has values and values
      // are the freq
      arr[index] = j;
      index++;
      arr2[j]--;
    }
  }

  return arr;
}

vector<int> countSort(vector<int> &arr) {

  if (arr.size() == 0 || arr.size() <= 1) {

    return arr;
  }

  // find max element

  int max = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  // count array creation
  vector<int> arr2(max + 1, 0);

  // freq array : for every num in original array
  for (int x : arr) {
    arr2[x]++;
  }
  int index = 0;
  for (int j = 0; j <= max; j++) {
    while (arr2[j] > 0) {
      // put index in the original array as freq index has values and values
      // are the freq
      arr[index] = j;
      index++;
      arr2[j]--;
    }
  }

  return arr;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {6, 3, 10, 9, 4, 2, 4, 9, 7};
  arr = countSort(arr);
  for (int x : arr) {
    cout << x << " ";
  }

  return 0;
}
