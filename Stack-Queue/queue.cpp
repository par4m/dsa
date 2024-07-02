#include <bits/stdc++.h>

using namespace std;
int main(int argc, char *argv[]) {

  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  cout << q.front() << " " << q.back() << " " << q.size() << " \n";

  while (!q.empty()) {
    cout << q.front() << " \n";
    q.pop();
  }

  return 0;
}
