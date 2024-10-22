#include "bits/stdc++.h"

using namespace std;

int main() {
  char a;
  cin >> a;
  if (a >= 65 && a <= 90) {
    cout << char(a + 32);
  } else if (a >= 97 && a <= 122) {

    cout << char(a - 32);
  }

  return 0;
}
