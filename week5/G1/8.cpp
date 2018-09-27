#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (i == j)
        a[i][j] = 1;
      if(i < j)
        a[i][j] = 2;
      if(i > j)
        a[i][j] = 3;
    }
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}