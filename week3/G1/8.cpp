#include <iostream>

using namespace std;

int main()
{
  /*
  Sum of all elements of given array.
  input
  4
  2 3 5 1
  output
  11
  */
  int n;
  cin >> n;
  int a[n];
  int sum = 0;
  for (int i = 1; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }

  cout << sum << endl;

  return 0;
}