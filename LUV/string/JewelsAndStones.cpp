#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {

  int t;
  cin >> t;

  while (t--) {
    string a;
    string b;
    cin >> a >> b;
    int ctr = 0;
    for (char c : b) {
      if (count(a.begin(), a.end(), c) > 0) {
        ctr++;
      }
    }
    cout << ctr << "\n";
  }

  return 0;
}
