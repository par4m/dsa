#include <bits/stdc++.h>

using namespace std;

void factors1(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i) {
        cout << i;
      } else {
        cout << i << "  " << n / i << " \n";
      }
    }
  }
}
int main(int argc, char *argv[]) {

  factors1(20);

  return 0;
}
