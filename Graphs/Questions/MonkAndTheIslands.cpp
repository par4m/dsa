#include <bits/stdc++.h>
#include <queue>
#include <vector>

using namespace std;

vector<int> arr[10001];
int vis[10001];
int dist[10001];

void bfs(int node) {
  queue<int> q;
  q.push(node);
  vis[node] = 1;
  dist[node] = 0;

  while (!q.empty()) {
    int front = q.front();
    q.pop();

    for (int child : arr[front]) {
      if (!vis[child]) {
        q.push(child);
        vis[child] = 1;
        dist[child] = dist[front] + 1;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int t, n, m, a, b;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
      // clear adj list from prev test cases
      vis[i] = 0;
      arr[i].clear();
      dist[i] = 0;
    }

    for (int i = 1; i <= m; i++) { // read m edges
      cin >> a >> b;
      arr[a].push_back(b);
      arr[b].push_back(a);
    }

    // to find dist of node N from source node, source node is 1

    bfs(1);

    cout << dist[n] << "\n";
  }

  return 0;
}
