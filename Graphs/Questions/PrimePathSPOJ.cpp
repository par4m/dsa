
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MIN_NUM = 1000;
const int MAX_NUM = 9999;

vector<int> arr[MAX_NUM + 1];
vector<int> primes; // all 4 digit primes

int dist[MAX_NUM + 1]; // Changed size of dist and vis arrays
int vis[MAX_NUM + 1];

bool isValid(int a, int b) { // returns true if only 1 position differs
  int ctr = 0;
  while (a > 0) {
    if (a % 10 != b % 10) { // last digit of a does not match last digit of b
      ctr++;
    }
    a /= 10;
    b /= 10;
  }
  return ctr == 1;
}

bool isPrime(int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

void buildGraph() {
  for (int i = MIN_NUM; i <= MAX_NUM; i++) {
    if (isPrime(i)) {
      primes.push_back(i); // insert into primes vector
    }
  }

  int sz = primes.size();
  for (int i = 0; i < sz; i++) { // build graph with primes vector
    for (int j = i + 1; j < sz; j++) {
      int a = primes[i];
      int b = primes[j];
      if (isValid(a, b)) {
        arr[a].push_back(b);
        arr[b].push_back(a);
      }
    }
  }
}

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
        vis[child] = 1;
        q.push(child);
        dist[child] = dist[front] + 1;
      }
    }
  }
}

int main() {
  int t, a, b;
  cin >> t;

  buildGraph();

  while (t--) {
    cin >> a >> b;

    for (int i = MIN_NUM; i <= MAX_NUM; i++) { // all 4 digit numbers
      vis[i] = 0;
      dist[i] = -1; // not reachable
    }

    bfs(a);

    if (dist[b] == -1) {
      cout << "Impossible\n";
    } else {
      cout << dist[b] << "\n";
    }
  }

  return 0;
}
