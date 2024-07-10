#include <bits/stdc++.h>

using namespace std;

long calculateHash(string str) {
  int PRIME = 101;

  long hash = 0;
  for (int i = 0; i < str.size(); i++) {
    hash = hash + str[i] * pow(PRIME, i);
  }
}

int main(int argc, char *argv[]) { return 0; }
