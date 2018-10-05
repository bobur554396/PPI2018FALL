#include <iostream>

using namespace std;

int main(){
  string s = "hello world";

  string t = s.substr(2);

  // cout << s << endl << t;

  s.erase(2, 3);

  cout << s;

  return 0;
}
