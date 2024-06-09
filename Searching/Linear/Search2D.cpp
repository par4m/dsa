#include "iostream"

using namespace std;

int main(int argc, char *argv[]) {

  int search;
  cout << "Enter element: ";
  cin >> search;
  cout << "\n";

  int arr[2][2] = {{1, 2}, {4, 5}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (arr[i][j] == search) {
        cout << "Found at row " << i + 1 << " Col " << j + 1;
      }
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (arr[i][j] == search) {
        cout << "Found at row " << i + 1 << " Col " << j + 1;
      }
    }
  }

  return 0;
}
