#include <iostream>

using namespace std;

int main(){
  // int a = 123; 
  // int res = 1 + 2 + 3 = 6;
  int n;
  cin >> n;
  // n/100 = 1
  // n%10 = 3
  // n/10%10 = 2

  int res = 0;
  while(n > 0){ // while(n)
    int k = n % 10;
    res += k;
    n /= 10;
    // cout << k << " " << n << endl;
  }
  cout << res << endl;
  // n=123
  /*
  (1) k = 123 % 10 = 3;
      res += k; 3;
      n = 123 / 10 = 12;
  (2) k = 12 % 10 = 2;
      res += k; 5
  (3) k = 1 % 10 = 1
      res += k; 6
  */

  return 0;
}