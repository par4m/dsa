#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {

  unordered_map<string, int> rohan;

  vector<string> arr = {"param", "arav", "param"};

  for (int i = 0; i < arr.size(); i++) {
    rohan[arr[i]]++;
  }
  //
  cout << rohan["param"];

  rohan["param"] = 3;

  for (auto it : rohan) {
    cout << it.first << "\n";
    cout << it.second << "\n";
  }

  return 0;
}

//
//   for (int i = 0; i < n; i++) {
//     for (char c : strb) {
//     }
//   }
// }
