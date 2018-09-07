#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // break
  int a = 0;
  for(;;){
    if(a == 1000){
      break;
    }
    cout << a << endl;
    a++;
  }

  return 0;
}