// BISHU AND HIS GIRLFRIEND Hacker Earth
// problem was deleted

#include "bits/stdc++.h"

using namespace std;

vector<int> ar[1000]; // adjacency list
int vis[1000];

int dist[1000]; // dist matrix from one source to rest

void dfs(int node, int d) {
  vis[node] = 1;

  dist[node] = d;

  for (int child : ar[node]) {
    if (!vis[child]) {
      dfs(child, d + 1);
    }
  }
}

int main(int argc, char *argv[]) {

  int n, m, a, b;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    ar[a].push_back(b);
    ar[b].push_back(a);
  }

  dfs(1, 0); // 0 for first node

  // girls city input
  int q;
  cin >> q;
  int mind = 99999999;

  int answer = -1;
  for (int i = q; i > 0; i--) {
    cin >> i;
    if (dist[i] < mind) {
      mind = dist[i];
      answer = i;
    } else if (dist[i] == mind && i < answer) {
      answer = i;
    }
  }
  cout << answer;

  return 0;
}
