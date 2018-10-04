#include <iostream>

using namespace std;

int main(){

  int a[4] = {2, 10, 3, -1};

  // cout << *(a+1) << endl; // a[1]

  // cout << *(a+3) << endl; // a[3]

  sort(a, a+4);
  reverse(a, a+4);

  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";


  return 0;
}