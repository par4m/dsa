#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> countSort(vector<int> &arr, int exp) {
  int n = arr.size() - 1;
  vector<int> output(n + 1, 0);
  // find max element
  int max = *max_element(arr.begin(), arr.end());

  // freq array

  for (int x : arr) {
    output[x]++;
  }

  vector<int> count(9 + 1, 0);

  // fill count array with the digits
  for (int i = 0; i < n; i++) {
    count[(arr[i] / exp) % 10]++;
  }

  int index = 0;
  for (int j = 0; j <= max;) {
    while (output[j] > 0) {
      arr[index] = j;
      index++;
      output[j]--;
    }
  }

  return arr;
}

vector<int> radixSort(vector<int> &arr) {

  // find max element to get the max no. of digits in the array
  int max = *max_element(arr.begin(), arr.end());
  // do count sort for every digit place
  for (int exp = 1; max / exp > 0; exp *= 10) {
    countSort(arr, exp);
  }
  cout << max;

  return arr;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {};

  return 0;
}
