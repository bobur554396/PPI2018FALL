#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a = 0, b = 0;
  int *p;

  // int c = a;
  // c = 5;

  p = &a;
  *p = 5;
  cout << a << " " << b << endl;
  // cout << &a << " " << p << endl;

  p = &b;
  *p = 7;

  cout << a << " " << b << endl;

  return 0;
}