
#include "bits/stdc++.h"
#include <cmath>

using namespace std;

int main() {
  // Set precision to handle floating-point input correctly

  long long a, b, c, d;

  cin >> a >> b >> c >> d;

  if (b * log(a) > d * log(c)) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
