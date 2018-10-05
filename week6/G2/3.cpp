#include <iostream>

using namespace std;

int main(){

  string s = "hello";
  string t = s;

  t = t + ' ';
  t += "world!";

  s[0] = 'H';

  cout << s << endl << t << endl;
  cout << (s == t) << endl;

  
  return 0;
}
