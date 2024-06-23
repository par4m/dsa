#include "bits/stdc++.h"
using namespace std;

int getMaxIndex(vector<int> &arr, int start, int end) {
  int max = start;
  for (int i = start; i < end; i++) {
    if (arr[i] > arr[max]) {
      max = i;
    }
  }

  return max;
}

void swap(vector<int> &c, int index1, int index2) {
  int temp = c[index1];
  c[index1] = c[index2];
  c[index2] = temp;
}

vector<int> selectionSort(vector<int> &arr) {
  // find max item in the remaining array and swap with correct index
  for (int i = 0; i < arr.size(); i++) {

    int last = arr.size() - i - 1;
    int maxIndex = getMaxIndex(arr, 0, last);
    swap(arr, maxIndex, last);
  }

  return arr;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {4, 3, 5, 2, 1};

  arr = selectionSort(arr);

  for (int i : arr) {
    cout << i << " ";
  }

  return 0;
}
