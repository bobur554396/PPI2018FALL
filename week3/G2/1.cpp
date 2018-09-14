#include <iostream>

using namespace std;

int main(){

  int a[4];
  a[0] = 2; // *(a + 0) = 2;
  a[1] = 5; // *(a + 1) = 5;
  a[2] = 0;
  a[3] = 7;

  // cout << *(a+1) << endl;
  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";

  return 0;
}