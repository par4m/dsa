
#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

void printPathArr(int pathArr[][MAX_COLS]) {
  for (int i = 0; i < MAX_ROWS; ++i) {
    for (int j = 0; j < MAX_COLS; ++j) {
      cout << pathArr[i][j] << " ";
    }
    cout << endl;
  }
}

void path(string processed, bool maze[][MAX_COLS], int r, int c, int ctr,
          int pathArr[][MAX_COLS]) {
  // Base case: Reached the bottom-right corner of the maze
  if (r == MAX_ROWS - 1 && c == MAX_COLS - 1) {
    pathArr[r][c] = ctr;
    cout << "Path found:\n";
    printPathArr(pathArr);
    return;
  }

  // Check if current cell is valid (within bounds and not visited)
  if (r < 0 || r >= MAX_ROWS || c < 0 || c >= MAX_COLS || !maze[r][c]) {
    return;
  }

  // Mark the current cell as visited
  maze[r][c] = false;
  pathArr[r][c] = ctr;

  // Recursive cases: Explore all possible movements

  // Move down
  path(processed + "D", maze, r + 1, c, ctr + 1, pathArr);
  // Move right
  path(processed + "R", maze, r, c + 1, ctr + 1, pathArr);
  // Move up
  path(processed + "U", maze, r - 1, c, ctr + 1, pathArr);
  // Move left
  path(processed + "L", maze, r, c - 1, ctr + 1, pathArr);

  // Backtrack: Restore the maze and pathArr to their original states
  maze[r][c] = true;
  pathArr[r][c] = 0;
}

int main() {
  bool board[MAX_ROWS][MAX_COLS] = {
      {true, true, true}, {true, true, true}, {true, true, true}};
  int pathArr[MAX_ROWS][MAX_COLS] = {0};

  path("", board, 0, 0, 1, pathArr); // Start from top-left corner

  return 0;
}
