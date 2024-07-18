
#include <bits/stdc++.h>

using namespace std;

vector<int> ar[1000];
int vis[1000];

void dfs(int node) {
  vis[node] = 1;
  for (int i : ar[node]) {
    if (vis[i] == 0) {
      dfs(i);
    }
  }
}

int main() {
  int ctr = 0;

  int n, m, a, b;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    ar[a].push_back(b);
    ar[b].push_back(a);
  }

  //
  for (int i = 1; i <= n; i++) {
    if (vis[i] == 0) {
      dfs(i);
      ctr++;
    }
  }

  cout << ctr; // Writing output to STDOUT
}
