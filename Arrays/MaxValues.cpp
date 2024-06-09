#include "iostream"

using namespace std;

void Max(int arr[], int s, int e) {

  int max = arr[0];
  for (int i = s - 1; i < e; i++) {
    if (arr[i] > max) {

      max = arr[i];
    }
  }

  cout << "Max " << max;
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 3, 29, 9, 18};
  Max(arr, 1, 2);

  return 0;
}
