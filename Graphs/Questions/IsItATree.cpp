#include <bits/stdc++.h>

using namespace std;

vector<int> ar[10001];
int vis[10001];

void dfs(int node) {
  vis[node] = 1;

  for (int it : ar[node]) {
    if (!vis[it]) {
      dfs(it);
    }
  }
}

int main(int argc, char *argv[]) {

  int n, m, a, b;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    ar[a].push_back(b);
    ar[b].push_back(a);
  }

  int ctr = 0;

  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      dfs(i);
      ctr++;
    }
  }

  // total edges = n - 1

  if (ctr == 1 && m == n - 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
