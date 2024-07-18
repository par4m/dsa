#include <bits/stdc++.h>

using namespace std;

int vis[10001];
int col[10001];
vector<int> ar[10001];

bool dfs(int v, int c) {

  vis[v] = 1;
  col[v] = c;

  for (int child : ar[v]) {
    if (vis[child] == 0) {
      // checks if even a single edge of this node that connects two nodes
      if (dfs(child, c ^ 1) == false)
        return false;
    } else {
      if (col[v] == col[child]) {
        return false;
      }
    }
  }
  return true;
}

int main(int argc, char *argv[]) { return 0; }
