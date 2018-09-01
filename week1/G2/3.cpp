#include <iostream>

using namespace std;

int main(){
  int n1 = 2, n2 = 3, n3 = 5, n4 = 100;

  n4 = n1; // n4 = 2;
  n1 = n3; // n1 = 5
  n3 = n4; // n3 = 2;

  cout << n1 << endl; // n1 = 5
  cout << n2 << endl; // n2 = 3
  cout << n3 << endl; // n3 = 2
  cout << n4 << endl; // n4 = 2

  return 0;
}