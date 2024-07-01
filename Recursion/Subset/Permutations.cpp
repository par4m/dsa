#include <bits/stdc++.h>
#include <vector>

using namespace std;

void Perm(string processed, string unprocessed) {
  if (unprocessed.empty()) {
    cout << processed << " \n";
    return;
  }

  char ch = unprocessed.at(0);
  // processed + 1
  for (int i = 0; i <= processed.size(); i++) {
    string f = processed.substr(0, i);
    string s = processed.substr(i, processed.length());
    // skip first character for next call
    Perm(f + ch + s, unprocessed.substr(1));
  }
}

vector<string> PermVec(string processed, string unprocessed) {
  vector<string> all;
  if (unprocessed.empty()) {
    // cout << processed << " \n";
    return {processed};
  }

  char ch = unprocessed.at(0);
  // till processed + 1
  for (int i = 0; i <= processed.size(); i++) {
    string f = processed.substr(0, i);
    string s = processed.substr(i, processed.length());
    // skip first character for next call
    vector<string> added = PermVec(f + ch + s, unprocessed.substr(1));
    all.insert(all.end(), added.begin(), added.end());
  }

  return all;
}

int main(int argc, char *argv[]) {

  // Perm("", "abc");
  vector<string> all = PermVec("", "abc");
  for (string x : all) {
    cout << x << " \n";
  }
  return 0;
}
