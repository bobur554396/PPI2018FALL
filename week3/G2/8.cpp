#include <iostream>

using namespace std;

int main()
{
  /*
  Show all indexes where number is negative
  input
  4
  -2 5 4 -7
  output
  0 3

  solution
  -2 5 4 -7 -- values
  0 1 2 3 -- index
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    if(a[i] < 0){
      cout << i << " ";
    }
  }

  return 0;
}