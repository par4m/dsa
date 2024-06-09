#include "iostream"

using namespace std;
int main(int argc, char *argv[]) {

  int max = 0;
  int arr[][3] = {{1, 2, 3}, {3, 2, 1}};
  for (int i = 0; i < 3; i++) {
    int rowsum = 0;
    for (int j = 0; j < 3; j++) {
      rowsum += arr[i][j];
    }

    if (rowsum > max) {
      max = rowsum;
    }
  }

  cout << max;

  return 0;
}
