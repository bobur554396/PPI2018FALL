#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  // (1 << 3) -- left shift == 0001
  cout << (1 << n) << endl;

  return 0;
}