#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // 0101
  int n = 5, i;
  cin >> i;

  int a = (1 << i);
  int res = n | a;

  cout << res << endl;


  return 0;
}