#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

void subSeq(string processed, string unprocessed) {

  if (unprocessed.empty()) {
    cout << processed << " \n";
    return;
  }

  char ch = unprocessed.at(0) + 0; // convert to ascii

  // add it
  subSeq(processed + ch, unprocessed.substr(1));

  // ignore it

  subSeq(processed, unprocessed.substr(1));

  // add its ascii
  subSeq(processed + to_string(int(ch)), unprocessed.substr(1));
}

int main(int argc, char *argv[]) {
  subSeq(" ", "abc");

  return 0;
}
