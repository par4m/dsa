#include <iostream>

using namespace std;

int check(int n) {
  if (n == 0) {
    return 1;
  }
  return 0;
}

int count(int n) {
  if (n == 0) {
    return 0;
  }
  return check(n % 10) + count(n / 10);
}

int countSingle(int n, int count) {
  if (n == 0) {
    if (count == 0) {
      return 1;
    }
    return count;
  }

  if (n % 10 == 0) {
    count++;
  }

  return countSingle(n / 10, count);
}

int main(int argc, char *argv[]) {

  cout << count(5050);
  cout << "\n";
  cout << countSingle(000, 0);
  return 0;
}
