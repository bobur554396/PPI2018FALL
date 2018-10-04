#include <iostream>

using namespace std;

int main(){
  string s = "hello";
  
  s[0] = 'H';

  s[10];

  for(int i = 0; i < s.size(); i++){
    cout << s[i] << " ";
    // cout << s.at(i) << " ";
  }

  return 0;
}