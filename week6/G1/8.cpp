#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello world";
  string t = "wo";

  
  // s.find(t)
  // string::npos <=> -1
  if(s.find(t) != string::npos){
    cout << "found";
  } else {
    cout << "not found";
  }
  

  return 0;
}