#include "bits/stdc++.h"

using namespace std;

void rotate(vector<int> &arr) {
  // code here
  reverse(arr.begin(), arr.end());
  reverse(arr.begin() + 1, arr.end());
}

int sumOfRowCol(int N, int M, vector<vector<int>> A) {
  // code here
  //
  int len = min(N, M);
  for (int i = 0; i < len; i++) {
    int num1 = 0, num2 = 0;
    for (int j = 0; j < N; j++)
      num1 += A[j][i];
    for (int j = 0; j < M; j++)
      num2 += A[i][j];
    if (num1 != num2)
      return 0;
  }
  return 1;
}

int main(int argc, char *argv[]) { return 0; }
