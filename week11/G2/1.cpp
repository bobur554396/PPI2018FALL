#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  map<string, int> m;
  m["aaa"] = 5;
  m["bbb"] = 1;
  m["ccc"] = 7;
  m["bbb."] = 10;
  // int a = m["aaa"];
  cout << m["bbb"] <<"\n";

  

  return 0;
}