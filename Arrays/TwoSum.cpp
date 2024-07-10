class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<int, int> m;
    int n = nums.size();
    // store nums and their index in the hashmap
    for (int i = 0; i < n; i++) {
      m[nums[i]] = i; // {value : index}
    }

    for (int i = 0; i < nums.size(); i++) {

      int diff = target - nums[i];
      // find the difference in the map
      if (m.find(diff) != m.end()) {
        // val equal to target - num found in hashmap
        if (m[diff] != i) {
          // check if the index of val is not equal to current index i since
          // same element cant be used twice
          return {i, m[diff]};
        }
      }
    }
    return {};
  }
};
