#include "iostream"

using namespace std;

char ceiling(char arr[], char target, int size) {

  int start = 0;
  int mid;
  int end = size - 1;

  while (start <= end) {

    mid = start + (end - start) / 2;

    if (arr[mid] > target) {

      end = mid - 1;

    } else {

      start = mid + 1;
    }
  }

  return arr[start % size]; // ceiling
}

int main(int argc, char *argv[]) {

  char arr[] = {'c', 'f', 'j'};

  char x = ceiling(arr, 'j', 3);
  cout << x;

  return 0;
}
