#include <iostream>

using namespace std;

int main()
{
  /*
  Symmetric matrix
  input
  3
  2 3 4
  3 1 10
  4 6 0

  output
  10
  0
  */
  int n;
  cin >> n;
  int a[n][n], maxi;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> a[i][j];
      if(i == 0 && j == 0)
        maxi = a[i][j];
      else{
        if(a[i][j] > maxi)
          maxi = a[i][j];
      }
    }
  }
  cout << maxi;


  return 0;
}