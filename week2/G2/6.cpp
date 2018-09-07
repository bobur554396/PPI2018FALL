#include <iostream>
#include <cmath>

using namespace std;

int main(){
  /*
    %i - integer
    %c - char
    %s - string
    %f - float
    %[align].[min-width].[fraction].[i/f/c/s]
  */
  int a = 2, b = 3;

  // printf("a = %i\nb = %i\n", a, b);
  // float f = 2.126;

  // printf("%-20f", M_PI);
  printf("pi = %0.3f \n", M_PI);

  return 0;
}