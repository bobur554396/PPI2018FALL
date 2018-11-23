#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
  int a[5] = {0};

  int *p;
  p = a;
  *p = 1;

  p++;
  *p = 2;

  p += 2;
  *p = 3;
  
  p--;
  *p = 10;


  for(int *ptr = a; ptr != (a + 5); ptr++)
    cout << *ptr << " ";

  // for(int i = 0; i < 5; i++)
  //   cout << a[i] << " "; // *(a + i)

  return 0;
}