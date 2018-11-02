#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void show(map<string, int> m){
  map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++)
    cout << (*it).first << " " << (*it).second << endl;
  cout << endl;
}

pair<string, int> findMax(map<string, int> m){
  int maxi = 0;
  pair<string, int> ans;
  map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++){
    pair<string, int> p = *it;
    if (p.second > maxi){
      maxi = p.second;
      ans = p;
    }
  }
  return ans;
}

int main(){
  map<string, int> m;
  m["aaa"] = 5;
  m["bbb"] = 1;
  m["ddd"] = 7;
  m["bbb"] = 10;

  pair<string, int> p1("ccc", 20);
  pair<string, int> p2("qqq", 0);
  m.insert(p1);
  m.insert(p2);

  show(m);

  pair<string, int> res = findMax(m);

  cout << res.first << " " << res.second << endl;
  return 0;
}