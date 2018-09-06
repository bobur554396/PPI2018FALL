#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // 0100
  int n = 4, i;
  cin >> i;

  int a = (1 << i);
  int c = n ^ a;

  // n ^= (1 << i); n = n ^ (1 << i);

  cout << c << endl;

  return 0;
}