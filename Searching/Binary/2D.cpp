#include "bits/stdc++.h"
#include <vector>

using namespace std;

int *RowColMatrix(vector<vector<int>> &c, int target) {
  int row = 0;
  int col = c[0].size() - 1;
  int *arr;

  while (row < c.size() && col >= 0) {
    if (target == c[row][col]) {
      arr[0] = row;
      arr[1] = col;
      return arr;
    } else if (target < c[row][col]) {
      col--;

    } else {
      row++;
    }
  }
  arr[0] = -1;
  arr[1] = -1;
  return arr;
}

int main(int argc, char *argv[]) {

  vector<vector<int>> c = {
      {10, 20, 30, 40}, {15, 25, 35, 45}, {28, 29, 37, 49}, {33, 34, 38, 50}};

  int *arr = RowColMatrix(c, 45);
  cout << arr[0] << " " << arr[1];

  return 0;
}
