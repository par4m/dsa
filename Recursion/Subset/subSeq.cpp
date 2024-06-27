#include <bits/stdc++.h>
#include <vector>

using namespace std;

void subSeq(string processed, string unprocessed) {

  if (unprocessed.empty()) {
    cout << processed << " \n";
    return;
  }

  char ch = unprocessed.at(0);

  // add it
  subSeq(processed + ch, unprocessed.substr(1));

  // ignore it

  subSeq(processed, unprocessed.substr(1));
}

vector<string> subSeqVector(string processed, string unprocessed) {

  if (unprocessed.empty()) {
    return {processed};
  }

  char ch = unprocessed.at(0);

  // add it
  vector<string> added = subSeqVector(processed + ch, unprocessed.substr(1));

  // ignore it
  vector<string> notAdded = subSeqVector(processed, unprocessed.substr(1));

  added.insert(added.end(), notAdded.begin(), notAdded.end());

  return added;
}

int main(int argc, char *argv[]) {
  subSeq(" ", "abc");

  return 0;
}
