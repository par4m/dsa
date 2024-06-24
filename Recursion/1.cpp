#include <iostream>

using namespace std;

void message3();

void message2() {
  cout << "Hello World\n";
  message3();
}
void message1() {

  cout << "Hello World\n";
  message2();
}
void message4() { cout << "Hello World\n"; }

void message3() {
  cout << "Hello World\n";
  message4();
}

void message() {
  cout << "Hello World\n";
  message1();
}

int main(int argc, char *argv[]) {
  message();
  return 0;
}
