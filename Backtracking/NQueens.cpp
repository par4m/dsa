
#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;
ZZ void display(bool board[MAX_ROWS][MAX_COLS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j; j < MAX_COLS; j++) {
      if (board[i][j]) {
        cout << "Q ";
      } else {
        cout << " X";
      }
    }
  }
}

int queens(bool board[][MAX_COLS], int row, int col) {
  // Base case: Reached the bottom-right corner of the maze
  if (row == MAX_ROWS - 1) {
    display(board);
    return 1;
  }

  for (int col = 0; col < ZZ)

    return 0;
}

int main() {

  queens(); // Start from top-left corner

  return 0;
}
