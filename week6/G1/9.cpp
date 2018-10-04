#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello world";
  string t = "wor";

  size_t f = s.find(t);
  if(f == string::npos){
    cout << "not found";
  } else {
    cout << f;
  }

  return 0;
}