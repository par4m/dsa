#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long ans = (a * b) - (c * d);
  cout << "Difference "
       << "= " << ans;

  return 0;
}
