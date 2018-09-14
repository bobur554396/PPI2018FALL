#include <iostream>

using namespace std;

int main()
{
  /*
  Find number K and remove it, shift left all rest elements add 0 at the end
  input
  4
  2 5 1 4
  5
  output
  2 1 4 0
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  /*
  2 5 1 4
  5

  (1) 2 5 1 4
  (2) 2 1 1 4;   a[i] = a[i+1];
  (3) 2 1 4 4
  (4) 2 1 4 0
  */

  for(int i = 0; i < n; i++){
    if(a[i] == k){
      for(int j = i; j < n - 1; j++){
        a[j] = a[j + 1];
      }
      // 2 1 4 4
      a[n - 1] = 0;
    }
  }

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";


  return 0;
}