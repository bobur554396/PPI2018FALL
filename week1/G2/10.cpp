#include <iostream>

using namespace std;

int main(){
  // int, char, string, bool

  int n1 = 10, n2;
  double d1 = 2.3;
  
  n2 = d1;

  double d2 = n1;
  // cout << d1 << " " << d2 << " " << n2 << endl;
  cout << n1 / n2 << endl;
  cout << n1 / d1 << endl;
  return 0;
}