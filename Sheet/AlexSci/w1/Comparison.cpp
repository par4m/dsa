#include "bits/stdc++.h"

using namespace std;

int main(int argc, char *argv[]) {
  int a, b;
  char c;

  cin >> a >> c >> b;
  if (c == '>') {
    if (a > b) {
      cout << "Right";
    } else {
      cout << "Wrong";
    }
  }
  if (c == '=') {
    if (a == b) {
      cout << "Right";
    } else {
      cout << "Wrong";
    }
  }
  if (c == '<') {
    if (a < b) {
      cout << "Right";
    } else {
      cout << "Wrong";
    }
  }
}
