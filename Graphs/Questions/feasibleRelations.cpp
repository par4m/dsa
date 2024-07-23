#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> arr[1000001];
int vis[1000001];
int cc[1000001];
int curr_cc;

void dfs(int node) {
  vis[node] = 1;
  cc[node] = curr_cc;

  for (int child : arr[node]) {
    if (!vis[child]) {
      dfs(child);
    }
  }
}

int main(int argc, char *argv[]) {

  int t, n, k, a, b;
  string op;

  cin >> t;

  while (t--) {

    vector<pair<int, int>> edgeList; // vector of pairs { {1,2} , {1.2}}
    cin >> n >> k;

    // p.first p,second

    curr_cc = 0;

    // clear before everu test case
    for (int i = 1; i <= n; i++) {
      vis[i] = 0;
      arr[i].clear();
    }

    //
    for (int i = 1; i <= k; i++) {
      cin >> a >> op >> b; // take a op b as input
      if (op == "=") {
        arr[a].push_back(b);
        arr[b].push_back(a);
      } else {
        edgeList.push_back({a, b}); // push that pair into the list
      }
    }

    // curr connected component
    //
    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) {
        curr_cc++;
        dfs(i);
      }
    }

    bool flag = true;
    for (int i = 0; i < edgeList.size(); i++) {
      a = edgeList[i].first;
      b = edgeList[i].second;

      if (cc[a] == cc[b]) {
        flag = false;
        break;
      }
    }

    if (flag) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
