#include "bits/stdc++.h"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  string a;
  getline(cin, a);

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == ' ') {
      cout << "\n";
    } else {
      cout << char(toupper(char(a[i])));
    }
  }

  return 0;
}
