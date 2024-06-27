class Solution {
public:
  int numberOfSteps(int num) { return check(num, 0); }

  int check(int n, int ctr) {
    if (n == 0) {
      return ctr;
    } else {
      if (n % 2 == 0) {
        return check(n / 2, ++ctr);
      } else {
        return check(--n, ++ctr);
      }
    }
  }
};
