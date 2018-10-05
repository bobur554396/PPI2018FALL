#include <iostream>
#include <sstream>

using namespace std;

int main(){
  stringstream ss;
  ss << "hello" << " " << "2" << " "<< "2.5";
  string s;
  int a;
  float f;
  ss >> s >> a >> f; 

  cout << s << " " << a * a << " " << f*f;

  return 0;
}
