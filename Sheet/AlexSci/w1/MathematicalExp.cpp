#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long x, y, c;
  char s, q;
  cin >> x >> s >> y >> q >> c;
  int res = 0;

  switch (s) {
  case '+':
    res = x + y;
    break;
  case '-':
    res = x - y;
    break;
  case '*':
    res = x * y;
    break;
  }
  if (res == c) {
    cout << "Yes";
  } else {
    cout << res;
  }
}
