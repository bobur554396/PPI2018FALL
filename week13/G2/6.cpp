#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int genRandom(){
  return rand() % 100 + 1;
}
void show(int a){
  cout << a << " ";
}

int main(){
  vector<int> v(10);

  srand(time(0));

  generate(v.begin(), v.end(), genRandom);

  for_each(v.begin(), v.end(), show);

  // for(int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";

  return 0;
}