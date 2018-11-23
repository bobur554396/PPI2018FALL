#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int a = 2;

  int *p = &a;
  // char *c;
  // double *d;

  // cout << &a << "\n" << p << endl;

  cout << a << "\n" << *p << endl;

  *p = 10;

  // int c = a;
  // c = 12;

  cout << a << endl;

  return 0;
}