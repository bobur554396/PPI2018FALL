#include <iostream>

using namespace std;

int main()
{
  /*
  Count number of positive numbers in array
  input
  4
  -2 5 4 -7
  output
  2
  */
  int n, cnt = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (a[i] > 0)
      cnt++;
  }
  cout << cnt << endl;

  return 0;
}