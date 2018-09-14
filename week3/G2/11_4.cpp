#include <iostream>

using namespace std;

int main()
{
  /*
  Linear search of K from given array
  input
  4
  2 5 1 1
  1
  output
  2
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> k;
  for (int i = 0; i < n; i++){
    if (a[i] == k){
      cout << i << endl;
      return 0;
    }
  }

  cout << -1;

  return 0;
}