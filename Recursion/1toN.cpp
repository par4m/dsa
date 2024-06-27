#include <iostream>

using namespace std;

void OnetoN(int i, int n) {
  if (i == n) {
    cout << n << " ";
    return;
  }
  cout << i << " ";

  i++;
  OnetoN(i, n);
}

int main(int argc, char *argv[]) {

  OnetoN(0, 5);
  return 0;
}
