#include <iostream>

using namespace std;

int main(){
  string s = "hello world";
  string t = "wo";

  if (s.find(t) == string::npos){ // -1
    cout << "not found";
  } else {
    cout << "found";
  }

  return 0;
}
