#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
  int a1[3] = {1, 2, 3};
  do{
    cout << a1[0] << " " << a1[1] << " " << a1[2] << endl;
  } while(next_permutation(a1, a1+3));

  cout << endl;

  int a2[3] = {2, 1, 3};
  do{
    cout << a2[0] << " " << a2[1] << " " << a2[2] << endl;
  } while(prev_permutation(a2, a2+3));


  return 0;
}