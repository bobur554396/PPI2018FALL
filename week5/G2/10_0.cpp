#include <iostream>

using namespace std;

int main()
{
  /*
  input
  3                    
  5 6 7                 
  6 6 8
  7 6 10
  output
  2 2
  10
  */
  int n, maxi, ind_i, ind_j;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];

  maxi = a[0][0];
  ind_i = ind_j = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(a[i][j] > maxi)
        maxi = a[i][j];
        ind_i = i;
        ind_j = j;
    }
  }
  cout << ind_i << " " << ind_j << endl << maxi;

  return 0;
}