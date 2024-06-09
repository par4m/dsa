

#include "iostream"

using namespace std;

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 4, 5, 7, 7};

  int n = 6;

  int largest = arr[0];
  int second = arr[0];

  // first pass
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  // second
  for (int i = 0; i < n; i++) {

    if (arr[i] > second && arr[i] != largest) {
      second = arr[i];
    }
  }
  cout << largest << " " << second;

  return 0;
}
