#include <iostream>

using namespace std;

int check(int arr[], int index) {

  if (index == 6) {
    return 0;
  }

  if (arr[index] < arr[index + 1]) {
    return check(arr, ++index);
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 8, 16};
  cout << check(arr, 0);

  return 0;
}
