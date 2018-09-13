#include <iostream>

using namespace std;

int main()
{
  /*
  Show all digits from given string
  input
  hello123world0
  output
  1230
  */
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++){
    int code = (int)s[i];
    if(code >= 48 && code <= 57)
      cout << s[i] << " ";
  }
  

  return 0;
}