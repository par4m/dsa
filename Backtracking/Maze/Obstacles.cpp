#include <bits/stdc++.h>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

void path(string processed, bool maze[][3], int r, int c) {

  if (r == MAX_ROWS - 1 && c == MAX_COLS - 1) {
    cout << processed << "\n";
    return;
  }

  if (!maze[r][c]) {
    return;
  }

  if (r < MAX_ROWS - 1) {
    path(processed + "D", maze, r + 1, c);
  }
  if (c < MAX_COLS - 1) {
    path(processed + "R", maze, r, c + 1);
  }
}

int main() {
  bool board[MAX_ROWS][MAX_COLS] = {
      {true, true, true}, {true, false, true}, {true, true, true}};

  path("", board, 0, 0); // Start from top-left corner
  return 0;
}
