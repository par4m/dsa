#include <cmath>
#include <iostream>

using namespace std;

int findSquare(int num) {
  int ans = 0;
  while (num > 0) {
    int rem = num % 10;
    ans += rem * rem;
    num = num / 10;
  }

  return ans;
}

bool isHappy(int n) {
  int s = n;     // start from number itself;
  int f = n + 2; // start from third number;

  do {
    s = findSquare(s);             // move once
    f = findSquare(findSquare(f)); // move 2 times
  } while (s != f);

  if (s == 1) {
    return true;
  }

  return false;
}

int main(int argc, char *argv[]) { return 0; }
