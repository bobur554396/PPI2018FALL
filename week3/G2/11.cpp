#include <iostream>

using namespace std;

int main()
{
  /*
  Linear search of K from given array
  input
  4
  2 5 1 7
  1
  output
  YES
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  cin >> k;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == k)
      cnt++;
  }
  if(cnt > 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}