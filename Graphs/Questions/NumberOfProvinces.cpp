class Solution {
public:
  void dfs(int node, vector<int> adj[], vector<int> &vis) {
    vis[node] = 1;
    // traverse all its neighbours and mark 1
    for (auto it : adj[node]) {
      if (vis[it] != 1) {
        dfs(it, adj, vis);
      }
    }
  }
  int findCircleNum(vector<vector<int>> &isConnected) {
    int ctr = 0;
    int n = isConnected.size();
    vector<int> vis(n, 0);
    vector<int> adj[n]; // create adjacency list from adj matrix
                        // Iterate through each vertex in the adjacency matrix
    for (int i = 0; i < n; ++i) {
      // Iterate through each edge in the adjacency matrix for vertex i
      for (int j = 0; j < n; ++j) {
        if (isConnected[i][j] == 1) {
          // If there is an edge from vertex i to vertex j, add j to i's
          // adjacency list
          adj[i].push_back(j);
        }
      }
    }
    for (int i = 0; i < n; i++) {
      if (vis[i] != 1) {
        ctr++;
        dfs(i, adj, vis);
      }
    }

    return ctr;
  }
};
