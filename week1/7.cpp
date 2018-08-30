#include <iostream>

using namespace std;

int main(){

  string s1 = "hello c++";

  string s2 = "\nHow are \nyou?";

  cout << (s1 + s2) + '1' << endl;
  

  return 0;
}