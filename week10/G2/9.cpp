#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
  set<int> s;
  s.insert(8);
  s.insert(3);
  s.insert(4);
  s.insert(4);
  s.insert(8);

  if(s.find(3) != s.end())
    cout << "found";
  else
    cout << "not found";

  return 0;
}