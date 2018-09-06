#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // break
  // continue

  for (int i = 0; i < 20; i++)
  {
    if(i % 3 == 0)
      continue;
    cout << i << endl;
  }

  return 0;
}