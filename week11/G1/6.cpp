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

int main(){
  map<string, int> m;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    string s;
    int a;
    cin >> s >> a;
    m[s] = a;
  }

  show(m);
  
  return 0;
}
