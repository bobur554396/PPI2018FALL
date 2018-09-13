#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 1
  */
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
    cin >> a[i];

  // your code here

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}