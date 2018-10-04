#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello world c++ world cpp world";
  string t = "world";

  size_t f = s.find(t, 6+t.size());
  if (f == string::npos){
    cout << "not found";
  }
  else{
    cout << f;
  }

  return 0;
}