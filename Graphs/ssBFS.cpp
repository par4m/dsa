#include <bits/stdc++.h>
#include <queue>
#include <vector>

using namespace std;

vector<int> ar[1001];
int dis[1001];

void bfs(int node) {
  int vis[1001] = {0};
  dis[node] = 0;
  queue<int> q;
  vector<int> Bfs;
  q.push(node);
  vis[node] = 1;

  while (!q.empty()) {
    int front = q.front();
    q.pop();
    Bfs.push_back(front);
    for (int child : ar[front]) {
      if (!vis[child]) {
        vis[child] = 1;
        dis[child] = dis[front] + 1;
        q.push(child);
      }
    }
  }
}

int main(int argc, char *argv[]) { return 0; }
