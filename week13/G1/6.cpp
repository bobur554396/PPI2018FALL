#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void mulToTwo(int a){
  cout << a * 2 << " ";
}

int main(){
  int a[6] = {1, 1, 2, 2, 2, 3};  
  vector<int> v(a, a + 6);
  

  for_each(v.begin(), v.end(), mulToTwo);

  // for(int i = 0; i < v.size(); i++)
  //   mulToTwo(v[i]);

  return 0;
}