#include <iostream>

using namespace std;

int main()
{
  string s = "hello";
  string t;

  t = s;

  t = t + " c++"; // t += " c++";

  cout << t << "\n" << s << "\n"; 
  cout << (t == s) << endl;   

  return 0;
}