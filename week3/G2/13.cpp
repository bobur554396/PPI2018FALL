#include <iostream>

using namespace std;

int main()
{
  /*
  Show all digits from string
  Input
  he12ll9o
  Output
  129
  */

//  char c[5] = {'h', 'e', 'l', 'l', 'o'};
//  string s = "hello";
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    int code = (int)s[i];
    if(code >= 48 && code <= 57)
      cout << s[i];
  }

  return 0;
}