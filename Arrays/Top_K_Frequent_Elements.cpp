class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {

    int size = nums.size();

    unordered_map<int, int> m;
    vector<vector<int>> frequencyBucket(size + 1, vector<int>());
    for (int i : nums) {
      m[i]++;
    }

    // store in separate vector according to frequency
    for (auto it : m) {
      frequencyBucket[it.second].push_back(it.first);
    }

    vector<int> topK;
    for (int i = size; i >= 0 && topK.size() < k; --i) {
      if (!frequencyBucket[i].empty()) {
        for (int x : frequencyBucket[i]) {
          topK.push_back(x);
          if (topK.size() == k)
            break; // Break if we have collected k elements
        }
      }
    }
    return topK;
  }
};
