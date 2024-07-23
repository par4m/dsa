#include "bits/stdc++.h"
#include <vector>
const int N = 1e5 + 10;

using namespace std;

vector<int> g[N];

int depth[N];

void dfs(int v, int par = -1) {
  for (int child : g[v]) {
    if (child == par) {
      continue;
    }
    depth[child] = depth[v] + 1;
    dfs(child, v);
  }
}

int main(int argc, char *argv[]) {

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  dfs(1);
  int max_depth = -1;
  int mx_d_node;

  // found max node and max depth

  for (int i = 1; i <= n; i++) {
    if (max_depth < depth[i]) {
      max_depth = depth[i];
      mx_d_node = i;
    }
    depth[i] = 0; // to run dfs again
  }

  // use max depth node to run dfs again
  dfs(mx_d_node);

  // find max depth and node again
  max_depth = -1;

  for (int i = 1; i <= n; i++) {
    if (max_depth < depth[i]) {
      max_depth = depth[i];
    }
  }

  cout << max_depth << " \n";
  // Flush the output stream to ensure all output is displayed
  cout.flush();

  return 0;
}
