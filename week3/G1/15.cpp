#include <iostream>

using namespace std;

int main()
{
  /*
  Find number K and remove it, shift left all rest elements add 0 at the end
  input
  4
  2 3 5 1 -- values
  3
  output
  2 5 1 0

  solution
  2 3 5 1
    5 1 1


  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  for (int i = 0; i < n; i++){
    if(a[i] == k){
      for(int j = i; j < n; j++){
        a[j] = a[j + 1];
      }
      a[n - 1] = 0;
    }
  }

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}