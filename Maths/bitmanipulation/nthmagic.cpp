#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int n = 3;
  int base = 5;
  int sum = 0;

  while (n > 0) {
    int last = n & 1;
    sum += last * base;
    base = base * 5;
    n = n >> 1;
  }

  cout << sum;

  int num = int(log2(6)) + 1;
  cout << " " << num;

  return 0;
}
