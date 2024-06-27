#include <bits/stdc++.h>
#include <vector>

using namespace std;

void BubbleSort(int index, vector<int> &arr, int n) {
  if (n == 1) {
    return;
  }
  if (index < n - 1) {

    // swap
    if (arr[index] > arr[index + 1]) {
      int temp = arr[index];
      arr[index] = arr[index + 1];
      arr[index + 1] = temp;
    }

    BubbleSort(index + 1, arr, n);
  } else {
    BubbleSort(0, arr, n - 1);
  }
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 4, 5, 3};
  BubbleSort(0, arr, arr.size());
  for (int i : arr) {
    cout << i;
  }

  return 0;
}
