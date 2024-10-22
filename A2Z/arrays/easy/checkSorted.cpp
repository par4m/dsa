#include "bits/stdc++.h"
using namespace std;

bool check(vector<int> &nums) {

  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] > nums[i + 1]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) { return 0; }
