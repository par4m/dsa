
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void MergeInPlace(vector<int> &arr1, int s, int m, int e) {
  vector<int> mix(e - s);
  // Taking Two variables, one pointing to start of first array
  // Other pointing to start of second arrau

  int i = s;
  int j = m;
  int k = 0; // pointer for new array

  // while any one of these goes out of bounds

  while (i < m && j < e) {
    // check which element is smaller
    if (arr1[i] < arr1[j]) {
      // if element of arr1 is smaller than ele of arr2 add it to mix arr
      mix[k] = arr1[i];
      i++;
      k++; // Move ahead everytime a new element is added.
    } else {
      mix[k] = arr1[j];
      j++;
      k++; // Move ahead everytime a new element is added;
    }
  }
  // May be possible that one of the arrays is not complete, so add remaining
  // elements to the mix array from the array which is longer
  while (i < m) {
    mix[k] = arr1[i];
    i++;
    k++;
  }

  while (j < e) {
    mix[k] = arr1[j];
    j++;
    k++;
  }

  for (int l = 0; l < mix.size(); l++) {
    arr1[s + l] = mix[l];
  }
}

void mergeSortInPlace(vector<int> &a, int s, int e) {
  if (e - s == 1) {
    return;
  }
  // Find middle and split it into two
  int mid = a.size() / 2;

  // getting left ans

  mergeSortInPlace(a, s, mid);        // copy of main array
  mergeSortInPlace(a, mid, a.size()); // copy of main array

  MergeInPlace(a, s, mid, e);
}

int main(int argc, char *argv[]) {
  vector<int> arr1 = {5, 4, 3, 2, 1};

  mergeSortInPlace(arr1, 0, arr1.size());

  for (int i : arr1) {
    cout << i;
  }

  return 0;
}
