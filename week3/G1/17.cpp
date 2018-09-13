#include <iostream>

using namespace std;

int main()
{
  /*
  convert all letter of the string to UPPER
  input
  hello
  output
  HELLO
  ---------------------------------
  new problem (homework)
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