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
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

  bool ok = true;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (a[i][j] != a[j][i]){
        ok = false;
        break;
      }
    }
    if(ok == false) break;
  }
  if(ok == true) cout << "YES";
  else cout << "NO";

  return 0;
}