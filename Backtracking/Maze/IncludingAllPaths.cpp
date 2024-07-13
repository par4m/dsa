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

  maze[r][c] = false;

  // i am considering this block in my path

  if (r < MAX_ROWS - 1) {
    path(processed + "D", maze, r + 1, c);
  }
  if (c < MAX_COLS - 1) {
    path(processed + "R", maze, r, c + 1);
  }
  // UP
  if (r > 0) {
    path(processed + "U", maze, r - 1, c);
  }
  // Left
  if (c > 0) {
    path(processed + "L", maze, r, c - 1);
  }

  // this line is where the function wil be over
  // so before the function gets removed, also remove the changes made by the
  // function
  maze[r][c] = true;
}

int main() {
  bool board[MAX_ROWS][MAX_COLS] = {
      {true, true, true}, {true, true, true}, {true, true, true}};

  path("", board, 0, 0); // Start from top-left corner
  return 0;
}
