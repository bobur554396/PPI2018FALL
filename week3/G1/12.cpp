#include <iostream>

using namespace std;

int main()
{
  /*
  Find maximum element from given array
  input
  4
  2 3 5 1 -- values
  output
  11
  */
  int n, maxi;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if(i == 0)
      maxi = a[i];
    if(a[i] > maxi)
      maxi = a[i];
  }

  cout << maxi << endl;


  return 0;
}