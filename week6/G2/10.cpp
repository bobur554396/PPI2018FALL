#include <iostream>

using namespace std;

int main(){
  string s = "hello world";
  string t = "world";

  size_t f = s.find(t);
  if(f == string::npos){
    cout << "not found" << endl;
  } else {
    cout << f << endl;
  }

  return 0;
}
