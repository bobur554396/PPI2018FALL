#include <iostream>

using namespace std;

int main()
{
  /*
  Find number K and remove it, shift left all rest elements add 0 at the end
  input
  hello
  output
  HELLO


  new problem
  input
  HellO
  output
  hELLo
  */
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    int code = (int)s[i];
    if (code >= 97 && code <= 122){
      code -= 32;
    }
    cout << (char)code;
      
  }

  return 0;
}