#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello";
  string t = "hi! ";

  s += ' ';
  s += "world";
  s.append("!"); // s += "! qwe";
  
  s.insert(0, t);

  cout << s << endl;


  return 0;
}