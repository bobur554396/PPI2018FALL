#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  map<string, int> m;
  m["qqq"] = 1;
  m["ddd"] = 2;
  m["ccc"] = 3;
  m["aaa"] = 3;
  m["aaaa"] = 10;

  map<string, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++){
    pair<string, int> p = *it;
    cout << p.first << "==>" << p.second << "\n";
  }

  return 0;
}
