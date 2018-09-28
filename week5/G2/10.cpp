#include <iostream>

using namespace std;

int main()
{
  /*
  input
  4 3                    
  5 6 7
  6 6 7
  7 6 9
  4 3 5
  output
  3 22

  solution iterations
  5 6 7 #18  ## 1                 
  6 6 7 #19  ## 2
  7 6 9 #22  ## 3
  4 3 5 #12  ## 4
  */
  int n, m, sum = 0, maxi, ind_max = 0;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  for (int i = 0; i < n; i++){
    sum = 0;
    for (int j = 0; j < m; j++){
      sum += a[i][j];
    }
    if(i == 0) // sum = 18
      maxi = sum;
    else{
      if(sum > maxi){
        maxi = sum;
        ind_max = i;
      }
    }
  } 
  cout << ind_max + 1 << " " << maxi << endl;

  return 0;
}