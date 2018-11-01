#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  map<string, int> m;
  pair<string, int> p1("aaa", 10);
  pair<string, int> p2("bbb", 12);
  m["qqq"] = 1;
  m["ddd"] = 2;
  m["ccc"] = 3;
  m.insert(p1);
  m.insert(p2);

  cout << m.size() << endl;
  map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++)
  {
    pair<string, int> p = *it;
    cout << p.first << "==>" << p.second << "\n";
  }

  return 0;
}
