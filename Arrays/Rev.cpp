#include "iostream"

using namespace std;

void Rev(int arr[]) {}

void Swap(int arr[], int index1, int index2) {

  int temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 3, 29, 9, 18};
  int n = 5;

  for (int i = 0; i < n / 2; i++) {
    Swap(arr, i, n - i - 1);
  }
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
