#include <bits/stdc++.h>

using namespace std;
int main(int argc, char *argv[]) {

  deque<int> q;
  q.push_front(1);
  q.push_front(2);
  q.push_back(3);

  cout << q.front() << " " << q.back() << " " << q.size() << " \n";

  while (!q.empty()) {
    cout << q.front() << " \n";
    q.pop_back();
    // q.pop_front();
  }

  cout << " front \n";

  q.push_front(1);
  q.push_front(2);
  q.push_back(3);
  while (!q.empty()) {
    cout << q.front() << " \n";
    q.pop_front();
    // q.pop_front();
  }

  return 0;
}
