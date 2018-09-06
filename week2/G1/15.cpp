#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // 0101
  int n = 5, i;
  cin >> i;

  int a = (1 << i);
  int a_inv = ~(a);
  int c = n & a_inv;

  cout << c << endl;

  return 0;
}