#include <iostream>

using namespace std;

int main()
{
  /*
  Symmetric matrix
  input
  3
  2 3 4
  3 1 6
  4 6 0

  output
  YES/NO
  */
  int n;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  bool ok = true;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (a[i][j] != a[j][i]){
        ok = false;
        break;
      }
    }
    if(!ok) break;
  }
  if(ok) cout << "YES";
  else cout << "NO";

  return 0;
}