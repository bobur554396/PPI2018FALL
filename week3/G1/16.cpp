#include <iostream>

using namespace std;

int main()
{
  /*
  Find number K and remove it, shift left all rest elements add 0 at the end
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