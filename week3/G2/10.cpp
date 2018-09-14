#include <iostream>

using namespace std;

int main()
{
  /*
  Find Max number from given array
  input
  4
  2 5 4 7
  output
  7
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  /*
  2 5 4 7
  maxi = 0

  (1) 2 > 0: maxi = 2;
  (2) 5 > 2: maxi = 5;
  (3) 4 > 5: maxi = 5;
  (4) 7 > 5: maxi = 7;
  */
  int maxi = 0;
  for(int i = 0; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
  }
  cout << maxi << endl;
 

  return 0;
}