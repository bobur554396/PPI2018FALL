#include <iostream>
#include <cmath>

using namespace std;

int main(){

  string s = "ddbbaacc";
  
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());

  cout << s;

  return 0;
}