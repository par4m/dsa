#include <bits/stdc++.h>
#include <vector>

using namespace std;

int vis[1001];
vector<int> ar[1001];

bool dfs(int node, int par) {
  vis[node] = 1;

  for (int child : ar[node]) {
    // child not visited
    if (vis[child] == 0) {
      if (dfs(child, node) == true) {
        return true;
      }
    } else {
      // if child is visited
      // if visited child is not parent return true that there is cycle
      if (child != par) {
        return true;
      }
    }
  }

  return false;
}

int main(int argc, char *argv[]) { return 0; }
