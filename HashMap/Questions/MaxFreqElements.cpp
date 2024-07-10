class Solution {
public:
  int maxFrequencyElements(vector<int> &nums) {
    // Write your code here

    unordered_map<int, int> count;

    int maxFreq = 0;
    int ctr = 0;

    // Store count of all elements in the array in the map
    // and store the maxFreq
    for (int i = 0; i < nums.size(); i++) {
      count[nums[i]]++;
      maxFreq = max(maxFreq, count[nums[i]]);
    }

    // get first index with maxFreq

    for (int i = 0; i < nums.size(); i++) {
      if (count[nums[i]] == maxFreq) {
        ctr++;
      }
    }

    return ctr;
  }
};
