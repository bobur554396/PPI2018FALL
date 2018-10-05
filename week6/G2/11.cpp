#include <iostream>

using namespace std;

int main(){
  string s = "hello world cpp world c++";
  string t = "world";
  int cnt = 0;
  size_t f = s.find(t, 0);// 6
  while(f != string::npos){
    cnt++;
    // cout << f << endl;
    f = s.find(t, f+t.size());
  }
  cout << cnt;

  return 0;
}
