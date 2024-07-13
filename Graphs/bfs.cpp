#include <bits/stdc++.h>
#include <queue>
#include <vector>

using namespace std;

vector<int> bfs(int V, vector<int> adj[]) {
  // mark all unvisited
  int vis[V] = {0};
  vis[0] = 1;
  queue<int> q;
  q.push(0);
  vector<int> bfs;

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    bfs.push_back(node);
    // for every element in adj[node] e.g 1 {2,4,6} so 246 here
    for (auto it : adj[node]) {
      // if its not visited add it {
      if (!vis[it]) {
        // mark it visited
        vis[it] = 1;
        q.push(it);
      }
    }
  }
  return bfs;
}

int main(int argc, char *argv[]) { return 0; }
