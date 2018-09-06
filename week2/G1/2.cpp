#include <iostream>

using namespace std;

int main(){
  // += , -= , *=, /=, %=
  int a = 2;
  // a = a + 10;
  a += 10;
  a %= 5;

  int b = 1;
  // b = b + 1;
  b += 1;

  b++; // b += 1; or b = b + 1;
  b--; // b -= 1; or b = b - 1;
  // b = 2;

  int c = b++;
  // b = 3;

  // cout << c << " " << b << endl;

  int d = ++b;

  // cout << d << " " << b << endl;
  // b = 4;
  
  int a1 = 10;
  int f = ++a1 + ++b;

  // cout << f << " " << a1 << " " << b << endl;
  // b = 5;

  int g = ++(++b);
  // cout << g << " " << b << endl;

  // int h = 4++; // error
  // int d1 = ++(b++); // error

  char cc = 'A';
  // cout << ++cc << endl;
  cout << cc++ << endl;
  cout << cc << endl;

  return 0;
}