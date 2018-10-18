#include <iostream>

using namespace std;

void show2(){
  cout << "hi\n";
}
void show(int n){
  show2();
  cout << n << "\n";
}
int main(){
  int n = 4;
  show(n);
  cout << "yes\n";
  return 0;
}