#include <iostream>

using namespace std;

int main(){
  // -= += *= /= %=
  
  int a = 2;
  a += 10; // a = a + 10;

  int b = 20;
  b %= a; //  b = b % a;

  cout << a << " " << b << endl;

  return 0;
}