#include <iostream>

using namespace std;

void show(){
  cout << "line 1\n";
  cout << "line 2\n";
  return; // <=> }
  cout << "line 3\n";
}
int sum(int a, int b){
  int res = a + b;
  return res;
}
int main(){
  show();
  int r = sum(2, 3);
  cout << r << endl;
  return 0;
  cout << "main line 2\n";
}