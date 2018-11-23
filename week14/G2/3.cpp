#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int a = 0, b = 0;

  int *p = &a;
  *p = 2;
  cout << a << " " << b << endl;

  p = &b;
  *p = 5;
  cout << a << " " << b << endl;

  
  return 0;
}