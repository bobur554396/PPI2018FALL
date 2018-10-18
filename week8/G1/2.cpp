#include <iostream>

using namespace std;

void show(){
  cout << "line 1\n";
  cout << 1 + 2;
  return;
  cout << "line 2\n";
  cout << "line 2\n";
  cout << "line 2\n";
  cout << "line 2\n";

}

int sum(int a, int b){
  return a + b;
}

int main(){
  // int res = sum(2, 3);
  show();

  return 0;
}