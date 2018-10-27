#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  v.push_back(3);
  v.push_back(10);
  v.push_back(4);
  v.push_back(1);

  // v.begin() == address to first elm
  // v.end() == address to empty cell after last elm
  // v.front() <==> v[0] <==> * v.begin()
  // v.back() <==> v[v.size() - 1]
  cout << v.front() << " " << v.back();

  return 0;
}