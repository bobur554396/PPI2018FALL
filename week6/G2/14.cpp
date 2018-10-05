#include <iostream>

using namespace std;

int main(){
  string s; // abba  abba
  cin >> s;

  string t = s;
  
  reverse(s.begin(), s.end());
  if(s == t)
    cout << "yes";
  else 
    cout << "no";

  return 0;
}
