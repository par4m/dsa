// Pattern:
//  *****
//  *****
//  *****
//  *****

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char *argv[]) {
  int n = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << "*";
    }
    cout << " \n";
  }

  return 0;
}
