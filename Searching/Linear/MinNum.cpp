#include "iostream"

using namespace std;

int Min(int arr[], int n) {
  int min = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}

int main(int argc, char *argv[]) {

  int start;
  int end;
  int arr[] = {18, 12, -7, 3, 14, 28};
  cout << Min(arr, 6);

  return 0;
}
