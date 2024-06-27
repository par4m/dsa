#include <bits/stdc++.h>

using namespace std;
int rev(int n) {

  if (n == 0) {
    return 0;
  }
  return (n % 10) * pow(10, (int(log10(n)))) + rev(n / 10);
}

bool palindrome(int n) {
  if (n == rev(n)) {
    cout << "Yes";
    return true;
  }
  cout << " No ";
  return false;
}

int main(int argc, char *argv[]) {
  palindrome(121);

  return 0;
}
