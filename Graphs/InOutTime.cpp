#include <bits/stdc++.h>
#include <vector>

using namespace std;

int vis[1001];
vector<int> ar[1001];
int timer = 1;
int In[1001];
int Out[1001];

bool dfs(int v) {
  vis[v] = 1;
  In[v] = timer++;
  for (int child : ar[v]) {
    if (vis[child] == 0) {
      dfs(child);
    }
  }
  Out[v] = timer++;
}

int main(int argc, char *argv[]) { return 0; }
