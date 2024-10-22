#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {

  string str = "hello";
  string str2 = "Hello";
  string result = str + str2;

  if (str == str2) {
    cout << " equal \n";
  } else {
    cout << " Not Equal\n";
  }

  str[0] = 'a'; // character assigning hence used single quotes
  cout << str[0];

  cout << str.size();

  for (int i = 0; i < str.size(); i++) {
    cout << str[i];
  }

  string str1;
  cout << " Enter a Line:  ";
  getline(cin, str1);
  cout << str1;

  // string new = reverse(str.begin(), str.end());

  string strNew;

  for (int i = str.size() - 1; i >= 0; i--) {
    strNew = strNew + str[i];
  }
  cout << strNew;

  return 0;
}
