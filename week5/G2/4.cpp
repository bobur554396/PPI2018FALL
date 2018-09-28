#include <iostream>

using namespace std;

int main()
{
  /*
  3
  */
  int n;
  cin >> n;
  int a[n][n];

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      a[i][j] = i * j;
    }
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout.width(3);
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}