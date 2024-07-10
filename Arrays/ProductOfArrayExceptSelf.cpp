class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    ios_base::sync_with_stdio(0);

    int n = nums.size();

    // fill with 1 initially
    vector<int> res(n, 1);

    // fill res with left sum
    for (int i = 1; i < n; i++) {
      res[i] = res[i - 1] * nums[i - 1];
    }

    int right_prod = 1;
    // calculate right products and multiply with left product together
    for (int i = n - 1; i >= 0; i--) {
      res[i] = res[i] * right_prod;

      // get right prod for next element
      right_prod *= nums[i];
    }

    return res;
  }
};
