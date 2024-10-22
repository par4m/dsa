#include "bits/stdc++.h"
// User function Template for C++
//
using namespace std;

class Solution {
public:
  int largest(vector<int> &arr, int n) {

    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > largest) {
        largest = arr[i];
      }
    }

    return largest;
  }
};

//{ Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    cout << ob.largest(arr, n) << "\n";
  }
  return 0;
}
