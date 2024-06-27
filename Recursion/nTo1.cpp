#include <iostream>

using namespace std;

void Nto1(int n) {
  if (n == 1) {
    cout << 1;
    return;
  }

  cout << n << " ";
  Nto1(n - 1); // Tail Recursion

  cout << n << " ";
}

void OnetoN(int n) {
  if (n == 1) {
    cout << 1 << " ";
    return;
  }

  OnetoN(n - 1); // Tail Recursion
  cout << n << " ";
}

int main(int argc, char *argv[]) {
  Nto1(5);
  cout << " \n";
  OnetoN(5);

  return 0;
}
