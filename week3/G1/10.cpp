#include <iostream>

using namespace std;

int main()
{
  /*
  Show numbers in odd positions from given array
  input
  4
  2 3 5 1 -- values
  0 1 2 3 -- indexes
  output
  11
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++){
    if(i % 2 == 1)
      cout << a[i] << " ";
  }
    

  return 0;
}