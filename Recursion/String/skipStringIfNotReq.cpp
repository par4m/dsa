#include <bits/stdc++.h>
#include <string>

using namespace std;

// Function to check if the string `a` starting from index `i` starts with `str`
bool startsWith(const string &a, int i, const string &str) {
  return a.substr(i, str.size()) == str;
}

void skipString(string &a, int i, string &str, string &answer, string skip) {
  if (i >= a.size()) {
    return;
  }
  // substring starting with i
  if (startsWith(a, i, str)) {
    // skip it
    skipString(a, i + skip.size(), str, answer, skip);
  } else {
    // append and move to next character
    answer += a[i];
    skipString(a, i + 1, str, answer, skip);
  }
}

int main(int argc, char *argv[]) {
  string a = "baapplestringapplesingh";
  string str = "apple";

  string answer;

  cout << a << " \n";

  skipString(a, 0, str, answer, "app");
  cout << answer;

  return 0;
}
