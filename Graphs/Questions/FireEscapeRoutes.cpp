#include <bits/stdc++.h>
#include <vector>

#define mod 1000000007

using namespace std;

int vis[100001];
vector<int> ar[100001];

int cc_size;

void dfs(int node) {

  vis[node] = 1;
  cc_size++;

  for (int child : ar[node]) {
    if (vis[child] == 0) {
      dfs(child);
    }
  }
}

int main(int argc, char *argv[]) {

  int t, n, m, a, b;

  cin >> t;

  while (t--) {
    cin >> n >> m;

    // clear for every test case
    for (int i = 1; i <= n; i++) {
      vis[i] = 0;
      ar[i].clear();
    }

    for (int i = 1; i <= m; i++) {
      cin >> a >> b;
      ar[a].push_back(b);
      ar[b].push_back(a);
    }

    // count number of connected components
    int cnt = 0;
    // number of ways to choose a group leader
    long long res = 1;

    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) {
        cc_size = 0;
        dfs(i);
        cnt++;
        res = (res * cc_size) % mod;
        // now return number of elements in that connected components
      }
    }
    cout << cnt << " " << res << " \n";
  }

  return 0;
}
