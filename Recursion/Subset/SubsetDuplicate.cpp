#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Subset(vector<int> arr) {
  vector<vector<int>> outer;

  outer.push_back({});

  int start = 0;
  int end = 0;

  for (int i = 0; i < arr.size(); i++) {
    int n = outer.size();
    for (int i = 0; i < n; i++) {
      vector<int> internal = outer[i];
      internal.push_back(x);
      outer.push_back(internal);
    }
  }

  return outer;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 1, 2, 3};
  sort(arr.begin(), arr.end()); // sort to get duplicates together

  vector<vector<int>> a = Subset(arr));

  for (vector<int> x : a) {
    cout << " \n";
    for (int i : x) {
      cout << i;
    }
  }
  return 0;
}
