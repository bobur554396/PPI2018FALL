#include <iostream>

using namespace std;

int main(){
  int a[4];  
  a[0] = 2;
  a[1] = 3; // *(a + 1) = 3;
  a[2] = 5;
  a[3] = 1;

  // *(a+1) == a[1]
  cout << *(a+1) << endl;

  return 0;
}