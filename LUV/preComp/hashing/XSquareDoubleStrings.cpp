#include "bits/stdc++.h"
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (s.size() < 2) {
      cout << "No"
           << "\n";
      continue;
    }

    unordered_map<char, int> c;
    for (int i = 0; i < s.size(); i++) {
      c[s[i]]++;
    }
    bool lol = false;

    for (auto it : c) {
      if (it.second > 1) {
        lol = true;
      }
    }

    if (lol) {
      cout << "Yes"
           << "\n";
    } else {
      cout << "No"
           << "\n";
    }
  }

  return 0;
}
