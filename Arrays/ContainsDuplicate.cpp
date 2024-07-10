
// Boost i/o.
auto init = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 'c';
}();

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    unordered_map<int, int> m;
    for (int i : nums) {
      m[i]++;
      if (m[i] > 1) {
        return true;
      }
    }

    return false;
  }
};
