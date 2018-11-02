#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  map<string, int> m;
  m["aaa"] = 5;
  m["bbb"] = 1;
  m["ddd"] = 7;
  m["bbb"] = 10;

  pair<string, int> p1("ccc", 20);
  pair<string, int> p2("qqq", -1);
  m.insert(p1);
  m.insert(p2);

  cout << m.size() << endl;
  map<string, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++){
    pair<string, int> p = *it;
    cout << p.first << "==>" << p.second << endl;
    // cout << (*it).first << "==>" << (*it).second << endl;
  }
  return 0;
}