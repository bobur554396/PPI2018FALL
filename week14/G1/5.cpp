#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[4];
  int *p;
  p = a;
  *p = 1;
  p = p + 1;
  *p = 2;

  p = p + 1;
  *p = 10;

  p = p + 1;
  *p = 3;

  for(int *ptr = a; ptr != (a + 4); ptr++)
    cout << *ptr << " "; // a[i] === *(a + i)

  return 0;
}