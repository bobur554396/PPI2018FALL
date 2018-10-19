#include <iostream>

using namespace std;

int sum(int a, int b){
  return a + b;
}

void show2(){
  cout << "show 2 function line 1\n";
  cout << "show 2 function line 2\n";
  cout << sum(3, 5) << endl;
}


void show(){
  cout << "show function line 1\n";
  cout << "show function line 2\n";
  show();
  cout << "show function line 3\n";
}

int main(){
  show();

  return 0;
}