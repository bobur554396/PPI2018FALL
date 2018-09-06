#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i = 0;
  while(i < 100){
    if (i % 2 == 1){
      cout << i << " ";
    }
    i++;
  }

  return 0;
}