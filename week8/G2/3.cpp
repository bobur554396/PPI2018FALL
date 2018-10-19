#include <iostream>

using namespace std;



void show(int n){
  if(n == 0)
    return;
  cout << n << " ";
  show(n - 1); // show(2); show(1); show(0);
}

int main(){
  int n;
  cin >> n;
  show(n); // show(3);

  return 0;
}