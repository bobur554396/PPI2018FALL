#include <iostream>

using namespace std;

int f1(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
    sum += i;
  return sum;
}

int f2(int n, int s)
{
  if (n == 0)
    return s;
  return f2(n - 1, s + n);
}

int main()
{
  int n, sum = 0;
  cin >> n;
  // 15 = 1 + 2 + 3 + 4 + 5
  cout << f2(n, sum) << endl;
  return 0;
}