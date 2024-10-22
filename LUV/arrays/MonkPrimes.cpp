#include "bits/stdc++.h"

using namespace std;
// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1)
    return false;
  if (num <= 3)
    return true;
  if (num % 2 == 0 || num % 3 == 0)
    return false;
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
  }
  return true;
}

int main(int argc, char *argv[]) {

  string a;
  cin >> a;
  long long sum = 0;

  for (char c : a) {
    if (isupper(c)) {
      sum -= tolower(c);
    } else if (islower(c)) {
      sum += toupper(c);
    }
  }
  sum = abs(sum);

  // Check if the sum is a prime number
  if (isPrime(sum)) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
