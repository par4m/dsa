#include "iostream"
#include "math.h"
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {

  int even = 0;

  int arr[] = {12, 13, 145, 165};
  int num;

  for (int i = 0; i < 4; i++) {

    int ctr = 1;
    num = arr[i];
    if (num < 0) {
      num = num * -1;
    } else if (num == 0) {
      return 1;
      exit;
    }

    do {
      ctr++;
      num = num / 10;
    } while (num / 10 != 0);
    if (ctr % 2 == 0) {
      cout << ctr << " Even \n";
      even++;
    } else {
      cout << ctr << " Odd \n";
    }
  }

  // ShortCut to find Number of digits in a Number
  // log10(number) + 1

  cout << round(log10(arr[0])) + 1;

  cout << "Total " << even;

  return 0;
}
