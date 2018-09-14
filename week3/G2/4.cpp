#include <iostream>

using namespace std;

int main(){
  /*
  input
  4
  2 5 0 7
  output
  2 5 0 7
  */
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];

  // your code

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}