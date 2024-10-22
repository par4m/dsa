
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int c1, c2;

    cin >> c1 >> c2;
    int n;
    cin >> n;
    int totalCost = 0;
    for (int i = 0; i < n; i++) {
      int totalCost1 = 0;
      int totalCost2 = 0;
      int n1, n2;
      cin >> n1 >> n2;

      if (n1 == 1) {
        totalCost1 += c1;
      }
      if (n2 == 1) {
        totalCost1 += c2;
      }

      if (n1 == 1) {
        totalCost2 += c2;
      }
      if (n2 == 1) {
        totalCost2 += c1;
      }

      totalCost += min(totalCost1, totalCost2);
    }
    cout << totalCost << "\n";
  }
}
