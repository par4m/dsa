#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  int start = max(l1, l2);
  int end = min(r1, r2);
  if (start <= end) {
    cout << start << " " << end;
  } else {
    cout << -1;
  }
}
