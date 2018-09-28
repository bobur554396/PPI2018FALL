#include <iostream>

using namespace std;

int main()
{
  /*
  symmetric matrix
  3
  0 1 2
  1 5 3
  2 3 4
  */
  int n;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];

  int k = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(a[i][j] == a[j][i])
        k++;
    }
  }
  if(k == n * n)
    cout << "YES";
  else 
    cout << "NO";

  return 0;
}