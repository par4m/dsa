#include "bits/stdc++.h"

using namespace std;

string interpret(string command) {
  string a = "";
  for (int i = 0; i < command.size(); i++) {

    if (command[i] == 'G') {
      a.push_back('G');
    } else if (command[i] == '(' && command[i + 1] == ')') {
      a.push_back('o');
      i += 1;
    } else {
      a += "al";

      i += 3;
    }
  }
  return a;
}

int main(int argc, char *argv[]) { return 0; }
