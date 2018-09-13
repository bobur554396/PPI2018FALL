#include <iostream>

using namespace std;

int main()
{
  /*
  Show even numbers from given array.
  input
  4
  2 3 5 1
  output
  11
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0)
      cout << a[i] << " ";
  }

  return 0;
}