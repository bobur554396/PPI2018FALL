#include <iostream>

using namespace std;

int main(){

  int a[3][3];
  // a[0][0] = 2;
  // a[0][1] = 3;
  // a[0][2] = a[0][1] + a[0][0];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      a[i][j] = 1;
    }
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}