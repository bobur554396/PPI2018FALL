#include <iostream>

using namespace std;

int main()
{
  int sum = 12, N2 = 7, N3, result;

  int n1 = 12;
  int n2 = 5;
  int n3 = 2;

  N3 = 123;
  sum = 14;

  sum = n1 + n2 + n3;
  result = (sum + 10) % 2;

  // cout << ((n1 + n2 + n3) + 10) % 2;
  cout << result;

  return 0;
}