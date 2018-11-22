#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a = 2;
  int* p;

  p = &a;

  cout << "&a = " << &a << endl;
  cout << "p = " << p << endl;
  cout << endl;
  
  cout << "a = " << a << endl;
  cout << "*p = " << *p << endl;

  return 0;
}