#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int genRandom(){
  return rand() % 100 + 1;
}

void doIt(int a){
  cout << a << " ";
}

int main(){

  srand(time(0));

  vector<int> v(10);
  
  for_each(v.begin(), v.end(), doIt);
  cout << endl;
  
  generate(v.begin(), v.end(), genRandom);
  for_each(v.begin(), v.end(), doIt);

  // for(int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";

  return 0;
}