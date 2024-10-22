#include "bits/stdc++.h"

using namespace std;

int count(int arr[], int n, int x) {

  int ctr = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      ctr++;
    }
  }
  return ctr;
  // code here
}

int main(int argc, char *argv[]) { return 0; }
