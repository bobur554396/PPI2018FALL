#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
  set<int> s;
  s.insert(3);
  s.insert(10);
  s.insert(4);
  s.insert(1);
  s.insert(1);
  s.insert(10);

  set<int>::iterator it;
  for(it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
  cout << endl;

  return 0;
}