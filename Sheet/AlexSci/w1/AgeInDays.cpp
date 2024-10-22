#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  long long t;
  cin >> t;
  cout << t / 365 << " years\n";
  cout << (t % 365) / 30 << " months\n";
  cout << (t % 365) % 30 << " days";
  return 0;
}
