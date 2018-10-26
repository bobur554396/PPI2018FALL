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

  // int a[10];
  // cout << a[0]; // *(a+0)

  set<int>::iterator it;
  // vector<int>::iterator it2;

  
  for(it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

  return 0;
}