#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{
  set<int> s;
  s.insert(20);
  s.insert(30);
  s.insert(10);
  s.insert(10);
  s.insert(40);
  s.insert(50);
  s.insert(20);


  set<int>::iterator it;
  for (it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

  return 0;
}