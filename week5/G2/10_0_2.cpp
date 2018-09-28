#include <iostream>

using namespace std;

int main()
{
  /*
  input
  3                    
  5 6 7                 
  6 6 7
  7 2 6
  output
  18
  19
  15
  */
  int n, sum = 0;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

  for (int i = 0; i < n; i++){
    sum = 0;
    for (int j = 0; j < n; j++){
      sum += a[i][j];
    }
    cout << sum << endl;
  }


  return 0;
}