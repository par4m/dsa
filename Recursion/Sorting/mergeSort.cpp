#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> Merge(vector<int> &arr1, vector<int> &arr2) {
  vector<int> mix(arr1.size() + arr2.size());
  // Taking Two variables, one pointing to start of first array
  // Other pointing to start of second arrau

  int i = 0;
  int j = 0;
  int k = 0; // pointer for new array

  // while any one of these goes out of bounds

  while (i < arr1.size() && j < arr2.size()) {
    // check which element is smaller
    if (arr1[i] < arr2[j]) {
      // if element of arr1 is smaller than ele of arr2 add it to mix arr
      mix[k] = arr1[i];
      i++;
      k++; // Move ahead everytime a new element is added.
    } else {
      mix[k] = arr2[j];
      j++;
      k++; // Move ahead everytime a new element is added;
    }
  }
  // May be possible that one of the arrays is not complete, so add remaining
  // elements to the mix array from the array which is longer
  while (i < arr1.size()) {
    mix[k] = arr1[i];
    i++;
    k++;
  }

  while (j < arr2.size()) {
    mix[k] = arr2[j];
    j++;
    k++;
  }

  return mix;
}

vector<int> mergeSort(vector<int> &a) {
  if (a.size() == 1) {
    return a;
  }
  // Find middle and split it into two
  int mid = a.size() / 2;

  // getting left ans
  vector<int> left(a.begin(), a.begin() + mid); // copy 0 to mid
  vector<int> right(a.begin() + mid, a.end());  // copy mid to end

  left = mergeSort(left);   // copy of main array
  right = mergeSort(right); // copy of main array

  return Merge(left, right);
}

int main(int argc, char *argv[]) {
  vector<int> arr1 = {5, 4, 3, 2, 1};

  vector<int> sorted;
  sorted = mergeSort(arr1);

  for (int i : sorted) {
    cout << i;
  }

  return 0;
}
