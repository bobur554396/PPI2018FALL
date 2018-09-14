#include <iostream>

using namespace std;

int main()
{
  /*
  Find Max number from given array
  input
  4
  -2 -5 -1 -7
  output
  -1
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  /*
  -2 -5 -1 -7
  maxi = -2
  (1) -5 > -2: maxi = -2;
  (2) -1 > -2: maxi = -1;
  (3) -7 > -1: maxi = -1
  */
  int maxi = a[0];
  for (int i = 1; i < n; i++){
    if (a[i] > maxi)
      maxi = a[i];
  }
  cout << maxi << endl;

  return 0;
}