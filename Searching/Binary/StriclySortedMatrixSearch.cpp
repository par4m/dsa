
#include "bits/stdc++.h"
#include <vector>

using namespace std;

int BinSearch(vector<int> &d, int row, int colStart, int colEnd, int element,
              int size) {
  int start = 0;
  int end = size - 1;

  while (start <= end) {

    int mid = start + (end - start) / 2;

    if (d[mid] == element) {
      return mid;

    } else if (element > d[mid]) {
      start = mid + 1;

    } else {
      end = mid - 1;
    }
  }
  return -1;
}

int search(vector<vector<int>> &c, int target) {

  int rows = c.size() - 1;
  int cols = c[0].size() - 1; // be cautious matrix can be empty

  if (rows == 1) {
    BinSearch(c[0], target, c.size() - 1);
  }
}

int main(int argc, char *argv[]) {

  vector<vector<int>> v;

  return 0;
}
