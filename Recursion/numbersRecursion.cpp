#include <iostream>

using namespace std;

void print(int n) {

  if (n == 5) {
    cout << 5;
    return;
  }
  cout << n << " \n";

  print(n + 1);
}
int main(int argc, char *argv[]) {

  print(1);

  return 0;
}
