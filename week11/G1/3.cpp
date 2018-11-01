#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void show(map<string, int> m){
  map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
  }
  cout << endl;
}

pair<string, int> findMax(map<string, int> m){
  map<string, int>::iterator it;
  int maxi = 0;
  pair<string, int> ans;
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
  pair<string, int> p1("aaa", 10);
  pair<string, int> p2("bbb", 12);
  m["eee"] = 11;
  m["ddd"] = 14;
  m["ccc"] = 20;

  m.insert(p1);
  m.insert(p2);

  show(m);  
  pair<string, int> ans = findMax(m);
  
  cout << ans.first << " " << ans.second << endl;

  return 0;
}
