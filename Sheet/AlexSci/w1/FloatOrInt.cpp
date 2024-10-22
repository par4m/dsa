#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  float a;
  cin >> a;
  if ((a - (int)a) == 0) {
    cout << "int " << (int)a;
  } else {
    cout << "float " << (int)a << " " << a - (int)a;
  }
  return 0;
}
