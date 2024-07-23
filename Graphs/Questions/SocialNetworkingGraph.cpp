#include "bits/stdc++.h"

#include <queue>
#include <vector>

using namespace std;

vector<int> arr[100001];
int vis[100001];

int dist[100001];

void bfs(int node) {
  queue<int> q;
  vis[node] = 1;
  dist[node] = 0;
  q.push(node);

  while (!q.empty()) {
    int front = q.front();

    q.pop();
    for (int child : arr[front]) {
      if (!vis[child]) {
        vis[child] = 1;
        dist[child] = dist[front] + 1;
        q.push(child);
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int m, n, a, b, q, src, d;

  cin >> n >> m;

  // create graph

  for (int i = 1; i <= m; i++) {
    cin >> a >> b;
    arr[a].push_back(b);
    arr[b].push_back(a);
  }

  cin >> q; // call it q times
  while (q--) {
    cin >> src >> d;

    // clear  vis, dist array for t iterations
    for (int i = 0; i <= n; i++) {
      vis[i] = 0;
      dist[i] = 0;
    }

    bfs(src); // call bfs from source and find dist to each node from it

    // traverse the distance array and output distance since bfs gives single
    // source shortest path

    cout << dist[d] << "\n";
  }

  return 0;
}
