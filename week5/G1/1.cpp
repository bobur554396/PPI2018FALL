#include <iostream>

using namespace std;

int main(){

  for(int i = 1; i <= 5; i++){
    printf("i=%i\n", i);
    for (int j = 1; j <= 3; j++){
      printf("j=%i ", j);
    }
    printf("\n");
  }


  return 0;
}