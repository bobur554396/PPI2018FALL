#include <iostream>

using namespace std;

int main(){
  /*
  3 3
  2 3 0
  1 2 4
  5 6 2

  4 9 0
  1 4 16
  25 36 4
  */
  int n, m;
  cin >> n >> m;
  int a[n][m];
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
      a[i][j] *= a[i][j];
    }
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}