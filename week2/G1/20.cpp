#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // break
  // continue
  int n = 0;
  for (;;)
  {
    cout << n << endl;
    n++;
    if(n == 1000)
      break;
  }

  return 0;
}