#include "iostream"

using namespace std;

void Swap(int arr[], int index1, int index2) {

  int temp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = temp;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 3, 29, 9, 18};

  Swap(arr, 1, 3);

  return 0;
}
