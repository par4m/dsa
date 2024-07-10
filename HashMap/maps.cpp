#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {

  // creation

  unordered_map<string, int> m;

  // insertion

  // 1
  pair<string, int> p = make_pair("param", 3);
  m.insert(p);

  // 2
  pair<string, int> pair2 = make_pair("arora", 2);
  m.insert(pair2);

  // 3
  m["mera"] = 1;

  // what will happen
  m["mera"] = 2;

  // Searching

  cout << m["mera"] << "\n";

  cout << m.at("arora") << "\n";

  // this creates an entry in the map with key unknownKey and value 0
  cout << m["unknownKey"] << "\n"; // 0

  cout << m.at("unknownKey") << "\n"; // 0

  // size
  cout << m.size() << " \n";

  // to check if key exists
  cout << m.count("bro") << " \n"; // 0
  cout << m.count("param") << " \n";

  // erase a key
  cout << m.erase("param") << " \n";

  // loop

  for (auto i : m) {
    cout << "key :" << i.first << " value:" << i.second;
    cout << " \n";
  }

  // iterator
  unordered_map<string, int>::iterator it = m.begin();
  while (it != m.end()) {
    cout << it->first << " " << it->second << " \n";
    it++;
  }

  return 0;
}
