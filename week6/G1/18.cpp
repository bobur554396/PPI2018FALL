#include <iostream>
#include <sstream>

using namespace std;

int main(){

  stringstream ss;

  ss << "hello" << " " << "2" << " " << "2.5"; 
  // "hello 2"
  string s;
  int a;
  float b;
  ss >> s >> a >> b;

  cout << a * a << endl << b;

  



  return 0;
}