#include <bits/stdc++.h>

using namespace std;
int rev(int n) {

  if (n == 0) {
    return 0;
  }
  return (n % 10) * pow(10, (int(log10(n)))) + rev(n / 10);
}

int main(int argc, char *argv[]) {
  cout << rev(1234);

  return 0;
}
