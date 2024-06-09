#include "bits/stdc++.h"
#include "iostream"

using namespace std;

class Temporary {
public:
  string Name;
  int id;

  // default constructors
  Temporary() {

    cout << "default constructor ";
    id = -1;
  }

  // parameterised constructor
  Temporary(int x) { id = x; }

  void pnew();
  void print() { cout << "Name is " << Name << "\n"; }
};

void Temporary::pnew() { cout << "Name " << Name; }

int main(int argc, char *argv[]) {

  Temporary t1;
  Temporary t2(24);
  t1.Name = "Param";
  t1.print();
  cout << "\n";
  t1.pnew();

  cout << "\n";
  cout << t1.id;
  cout << "\n";

  cout << t2.id;

  return 0;
}
