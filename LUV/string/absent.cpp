#include "bits/stdc++.h"

using namespace std;

bool checkRecord(string s) {

  int consecA = 0;
  int consecL = 0;

  for (char c : s) {
    if (c != 'L') {
      consecL = 0;
    }
    if (c == 'A') {
      consecA++;
      if (consecA > 1) {
        return false;
      }

    } else if (c == 'L') {
      consecL++;
      if (consecL >= 3) {
        return false;
      }
    }
  }
  return true;
}

int main(int argc, char *argv[]) { return 0; }
