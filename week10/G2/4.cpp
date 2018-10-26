#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  v.empty() <=> v.size() == 0
  cout << v.empty() << " " << v.size();

  return 0;
}