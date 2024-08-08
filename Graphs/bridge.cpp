#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector<int> arr[101];
int in[101];
int low[101];
int vis[101];
int timer; // 0 automatically

void dfs(int node, int par) {
  vis[node] = 1;
  in[node] = low[node] = timer;
  timer++;

  for (int child : arr[node]) {
    if (child == par) { // if it is parent dont do anything just continue as
                        // already visited
      continue;
    }
    if (vis[child] == 1) { // back edge
                           // // edge node - child is a back edge
                           //
      low[node] = min(low[node], in[child]);

    } // if visited but not parent then ancestor
    else {
      // edge node - child forward edge
      dfs(child, node);

      low[node] = min(low[node], low[child]);
      if (low[child] > in[node]) { // it is a bridge, it is not connected to any
                                   // of the ancestors
        cout << node << " - " << child << " is a bridge\n";
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int n, m, x, y;
  cin >> n >> m; // n number of edges m vertices
                 //
  while (m--) {
    cin >> x >> y;
    arr[x].push_back(y);
    arr[y].push_back(x);
  }

  dfs(1, -1); // no parent of root so passing -1

  // imp to pass parent to distinguish between its parent and ancestor
  //

  return 0;
}
