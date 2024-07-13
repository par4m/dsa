#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

  int n, m;

  cin >> n >> m;

  vector<int> adj[n + 1];

  // O(E) -> no of edges

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  return 0;
}
