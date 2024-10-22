#include "bits/stdc++.h"
#include <unordered_map>

using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N) {

  // code here
  //
  long res = 0;
  long curr_sum = 0;
  for (int i = 0; i < K; i++) {
    res += Arr[i];
  }
  curr_sum = res;

  for (int i = K; i < N; i++) {
    curr_sum += Arr[i];
    curr_sum -= Arr[i - K];
    res = max(res, curr_sum);
  }

  return res;
}

int main(int argc, char *argv[]) { return 0; }
