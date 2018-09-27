#include <iostream>

using namespace std;

int main(){

  // int a[3] = {1, 2, 4};
  int a[3][3];
  a[0][0] = 2;
  a[0][1] = 5;
  a[0][2] = 3 + a[0][1];

  // a[0][3] -- error


  cout << a[0][0];
  
  return 0;
}