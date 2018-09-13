#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  int res = 1, i = 1;
  while(i <= n){
    res *= i;
    i++;
  }
  cout << res << endl;
  

  return 0;
}