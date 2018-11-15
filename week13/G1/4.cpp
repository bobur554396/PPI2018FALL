#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v(10);

int main(){
  
  int a = 0;
  fill(v.begin(), v.end(), ++a);
  fill(v.rbegin(), v.rend() - 3, 5);
  // my_fill(5);
  
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  

  return 0;
}