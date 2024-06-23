#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int arr[] = {0, 0, 0};

  // reverse and xor
  for (int i = 0; i <= 3 / 2; i++) {
    int temp = arr[i] xor 1;
    arr[i] = arr[3 - i - 1] xor 1;
    arr[3 - i - 1] = temp;
  }
  for (int a : arr) {
    cout << a << " ";
  }

  return 0;
}
