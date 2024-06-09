#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {

  char name[20];
  cin >> name;
  cout << name;
  char search;
  cout << "\nEnter character to search: ";
  cin >> search;
  int i = 0;
  while (name[i] != '\0') {
    if (name[i] == search) {
      cout << "FOund at " << i;
    }

    i++;
  }

  return 0;
}
