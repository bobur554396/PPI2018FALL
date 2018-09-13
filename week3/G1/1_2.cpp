#include <iostream>

using namespace std;

int main()
{
  // int a = 123;
  // int res = 1 + 2 + 3 = 6;
  int n;
  cin >> n;

  int res = 0;

  for(;n > 0; n /= 10){
    int k = n % 10;
    res = res + k;
  }

  // while (n > 0){ 
  //   int k = n % 10;
  //   res += k;
  //   n /= 10;
  // }
  cout << res << endl;

  return 0;
}