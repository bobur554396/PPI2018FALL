#include <iostream>

using namespace std;

int main(){
  int b = -10;
  int a[] = {2, 5, 0, 7};

  a[0] = b;
  a[1] = a[2] + a[3];

  for (int i = 0; i < 4; i++)
    cout << a[i] << " ";

  return 0;
}