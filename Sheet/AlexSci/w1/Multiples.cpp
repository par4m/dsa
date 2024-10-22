#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long a, b;
  cin >> a >> b;
  bool m = false;
  if (a % b == 0 || b % a == 0) {
    m = true;
  }
  if (m) {
    cout << "Multiples";
  } else {
    cout << "No Multiples";
  }
}
