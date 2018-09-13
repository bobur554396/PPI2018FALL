#include <iostream>

using namespace std;

int main()
{
  /*
  Linear search of K from given array
  input
  4
  2 3 5 1 -- values
  5
  output
  YES
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  for(int i = 0; i < n; i++){
    if(a[i] == k){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";


  return 0;
}