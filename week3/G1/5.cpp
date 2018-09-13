#include <iostream>

using namespace std;

int main()
{
  int a[4];
  a[0] = 2;
  a[1] = 3; 
  a[2] = a[0] * 2;
  a[3] = 1;

  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";

  return 0;
}