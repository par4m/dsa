#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findNum(vector<int> &a) {
  int unique = 0;

  for (int x : a) {
    unique ^= x;
  }

  return unique;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {2, 3, 4, 1, 2, 1, 3, 6, 4};
  cout << findNum(arr);

  return 0;
}
