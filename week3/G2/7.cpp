#include <iostream>

using namespace std;

int main()
{
  /*
  Show numbers in odd position from given array
  input
  4
  2 5 4 7
  output
  5 7

  solution
  2 5 4 7 -- values
  0 1 2 3 -- index
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  for (int i = 0; i < n; i++){
    if(i % 2 == 1){
      cout << a[i] << " ";
    }
  }

  return 0;
}