//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
public:
  string removeChars(string string1, string string2) {

    for (char c : string2) {
      string1.erase(remove(string1.begin(), string1.end(), c), string1.end());
    }
    return string1;
    // code here
  }
};

//{ Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    string string1, string2;
    cin >> string1;
    cin >> string2;
    Solution ob;
    cout << ob.removeChars(string1, string2) << endl;
  }
  return 0;
}

// } Driver Code Ends
