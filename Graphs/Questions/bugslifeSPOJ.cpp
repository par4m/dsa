#include <bits/stdc++.h>
using namespace std;

vector<int> ar[20001];
int vis[20001];
int col[20001];

bool bipartite(int v, int c) {

  vis[v] = 1;
  col[v] = c;

  for (int child : ar[v]) {
    if (vis[child] == 0) {
      if (bipartite(child, c ^ 1) == false) {
        return false;
      }

    } else {
      if (col[child] == col[v]) {
        return false;
      }
    }
  }

  return true;
}

int main(int argc, char *argv[]) {

  int t, n, m, a, b;
  // no. of test cases
  //
  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    cin >> n >> m;

    // do t number of times
    //
    //
    // clear vis and ar
    for (int i = 1; i <= n; i++) {
      ar[i].clear();
      vis[i] = 0;
    }
    for (int i = 1; i <= m; i++) {
      cin >> a >> b;
      ar[a].push_back(b);
      ar[b].push_back(a);
    }

    // now check for bipartite
    bool isBipartite = true;

    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) {
        if (!bipartite(i, 0)) {
          isBipartite = false;
          break;
        }
      }
    }
    cout << "Scenario #" << tc << ":\n";
    if (isBipartite) {
      cout << "No suspicious bugs found!\n";
    } else {
      cout << "Suspicious bugs found!\n";
    }
  }

  return 0;
}
