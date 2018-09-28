#include <iostream>

using namespace std;

int main()
{
  /*
  input
  3                    
  5 6 7                 
  6 20 8
  7 6 10
  output
  7
  8
  10
  */
  int n, maxi;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

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