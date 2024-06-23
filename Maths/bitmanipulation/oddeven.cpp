
#include <bits/stdc++.h>

using namespace std;

void evenodd(int n) {

  if ((n & 1) == 1) {

    cout << " Odd";
    return;
  }
  cout << " Even";
}

int main(int argc, char *argv[]) {
  int n = 68;
  evenodd(n);

  return 0;
}
