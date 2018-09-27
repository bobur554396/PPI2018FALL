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
  4
  10
  6
  */
  int n;
  cin >> n;
  int a[n][n], maxi;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++){
    maxi = a[i][0];
    for (int j = 0; j < n; j++){
      if(a[i][j] > maxi)
        maxi = a[i][j];
    }
    cout << maxi << endl;
  }

  return 0;
}