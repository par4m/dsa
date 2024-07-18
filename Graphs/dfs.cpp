#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {

  vis[node] = 1;
  ls.push_back(node);
  // traverse all its neighbours
  for (auto it : adj[node]) {
    // if not visited
    if (!vis[it]) {
      // call dfs on it
      dfs(it, adj, vis, ls);
    }
  }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {

  //
  int vis[V] = {0};
  int start = 0;
  vector<int> ls; // store dfs
  dfs(start, adj, vis, ls);

  return ls;
}

int main() {
  int V = 5;          // Number of vertices
  vector<int> adj[V]; // Adjacency list representation of graph

  // Add edges to the graph
  adj[0].push_back(1);
  adj[0].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(4);

  vector<int> result = dfsOfGraph(V, adj);

  // Print DFS traversal result
  for (int node : result) {
    cout << node << " ";
  }
  cout << endl;

  return 0;
}
