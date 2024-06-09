#include "iostream"

using namespace std;

int Search(int arr[], int n, int ele, int start, int end) {

  for (int i = start; i <= end; i++) {
    if (arr[i] == ele) {
      return i;
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {

  int start;
  int end;
  int arr[] = {18, 12, -7, 3, 14, 28};
  cout << Search(arr, 6, 18, 1, 4);

  return 0;
}
