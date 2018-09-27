#include <iostream>

using namespace std;

int main()
{
  /*
  Symmetric matrix
  input
  3
  2 3 4 #9
  3 1 10 #14
  4 6 0 #10

  output
  1 14
  */
  int n;
  cin >> n;
  int a[n][n], maxi, ind, sum = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++){
    sum = 0;
    for (int j = 0; j < n; j++){
      sum += a[i][j];
    }
    if(i == 0){
      maxi = sum;
      ind = i;
    }
    else{
      if(sum > maxi){
        maxi = sum;
        ind = i;
      }
    }
    // cout << sum << endl;
  }

  cout << ind << " " << maxi;

  return 0;
}