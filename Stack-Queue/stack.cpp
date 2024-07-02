#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main(int argc, char *argv[]) {

  stack<int> stack;
  stack.push(1);
  stack.push(1);
  stack.push(1);
  cout << stack.top() << " " << stack.size() << "";

  while (!stack.empty()) {
    cout << stack.top() << " \n";
    stack.pop();
  }

  return 0;
}
