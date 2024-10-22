#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long a, b, c;
  cin >> a >> b >> c;
  cout << min(a, (min(b, c))) << " " << max(a, (max(b, c)));
}
