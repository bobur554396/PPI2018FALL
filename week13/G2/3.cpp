#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v(10);

void my_fill(int val){
  for(int i = 0; i < v.size(); i++)
    v[i] = val;
}

int main(){

  // my_fill(3);
  fill(v.begin(), v.end() - 3, 3);
  fill(v.rbegin(), v.rend() - 3, 5);

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}