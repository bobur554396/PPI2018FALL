#include <iostream>

using namespace std;

int main()
{

  /*
  2D array
  2 2 -- rows and columns
  1 2
  3 4
  */
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }

  // your code
  cout << "\n";

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}