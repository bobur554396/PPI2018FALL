#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);

  // v.front() <==> v.at(0);
  // v.back() <==> v.at(v.size() - 1);
    
  cout << v.front() << " " << v.back();

  return 0;
}