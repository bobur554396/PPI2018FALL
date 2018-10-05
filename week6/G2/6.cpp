#include <iostream>

using namespace std;

int main(){
  string s = "542";

  for(int i = 0; i < s.size(); i++){
    int a = int(s[i]) - int('0');
    cout << a << endl;
  }
  // 5 4  <===> 5*10+4 

  return 0;
}
