#include <iostream>

using namespace std;

int f1(int n){
  int k = 1;
  for(int i = 1; i <= n; i++)
    k *= i;
  return k;
}

int f2(int n){
  if(n == 1)
    return 1;
  return n * f2(n - 1);
}

int main(){
  int n;
  cin >> n;
  // 5! = 1 * 2 * 3 * 4 * 5
  cout << f1(n) << endl << f2(n) << endl;

  return 0;
}