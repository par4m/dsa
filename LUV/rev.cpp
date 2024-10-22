#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {

  string str = "hello";
  // string new = reverse(str.begin(), str.end());

  string strNew;

  for (int i = str.size() - 1; i >= 0; i--) {

    strNew.push_back(str[i]);
  }
  cout << strNew;

  return 0;
}
