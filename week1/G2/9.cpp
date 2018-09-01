#include <iostream>

using namespace std;

int main(){
  // int, char, string
  bool b1 = 1; // true
  bool b2 = 0; // false
  bool b3 = true;
  bool b4 = false;

  cout << b1 << " " << b3 << endl;

  cout << (b1 and b4) << endl;
  cout << (b1 or b4) << endl;
  cout << (b1 ^ b4) << endl;

  return 0;
}