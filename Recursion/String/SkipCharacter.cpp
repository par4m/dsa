#include <bits/stdc++.h>

using namespace std;

void skipChar(string &a, int i, string &answer) {
  if (i == a.size()) {
    return;
  }

  if (a[i] != 'a') {
    answer += a[i];
  }

  skipChar(a, ++i, answer);
}
string skipCharWithout(string &a, int i) {
  string ch;
  if (i == a.size()) {
    return "";
  }

  if (a[i] != 'a') {
    ch = a[i];
  } else {
    ch = ' ';
  }
  return ch + skipCharWithout(a, ++i);
}

int main(int argc, char *argv[]) {
  string a = "baccad";

  cout << a << " \n";
  string answer;
  skipChar(a, 0, answer);
  cout << answer << " \n";

  skipCharWithout(a, 0);
  cout << answer;

  return 0;
}
