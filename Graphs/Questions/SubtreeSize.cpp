#include <bits/stdc++.h>
#include <vector>
using namespace std;

int vis[10001];
vector<int> ar[10001];
int subSize[10001];

int dfs(int node) {

  vis[node] = 1;
  int curr_size = 1;

  for (int child : ar[node]) {
    if (vis[child] == 0) {
      curr_size += dfs(child);
    }
  }

  subSize[node] = curr_size;

  return curr_size;
}

int main(int argc, char *argv[]) { return 0; }
