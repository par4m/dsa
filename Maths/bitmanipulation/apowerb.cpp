#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int base = 3;
  int power = 6;
  int ans = 1;

  while (power > 0) {
    if (power & 1) {
      ans *= base;
    }
    power = power >> 1;
    base = base * base;
  }
  cout << ans;

  return 0;
}
