#include <iostream>

using namespace std;

int main()
{
  /*
  Convert all letter to UPPER
  Input
  hello
  Output
  HELLO


  new problem
  input
  HellO
  output
  hELLo
  */
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++){
    int code = (int)s[i];
    if(code >= 97 && code <= 122)
      code = code - 32;
    cout << (char)code;
  }
  cout << "\n";

  return 0;
}