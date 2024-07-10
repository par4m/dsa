class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> ans;
    // key is sorted version of string :
    unordered_map<string, vector<string>> mp;
    for (string i : strs) {
      string key = i;
      // sort the string
      sort(key.begin(), key.end());
      // mp[key] => string vector
      mp[key].push_back(i);
    }

    for (auto it : mp) {
      ans.push_back(it.second);
    }

    return ans;

    // for each string sort it and to the mp with key sorted string add they
    // unsorted version to the string vector
  }
};
