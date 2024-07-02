#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {

  int insertions = 0;
  int left_paren = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      left_paren++;

    } else {
      if (i + 1 < s.size() && s[i + 1] == ')') {
        if (left_paren > 0) {
          left_paren--;
        } else {
          insertions++;
        }
        // Move past
        i++;
      } else {
        if (left_paren > 0) {
          left_paren--;
          insertions++;

        } else {
          insertions += 2;
        }
      }
    }
  }

  // if there are left_paren left then
  // for every 1 we need 2

  insertions += left_paren * 2;
  return insertions;
}

int main(int argc, char *argv[]) { return 0; }
