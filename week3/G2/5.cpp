#include <iostream>

using namespace std;

int main()
{
  /*
  Sum of all elements int array
  input
  4
  2 5 0 7
  output
  14
  */
  int n, sum = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  // for (int i = 0; i < n; i++){
  //   sum += a[i];
  // }

  cout << sum << endl;

  return 0;
}