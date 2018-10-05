#include <iostream>

using namespace std;

int main(){
  string s = "hello";

  // cout << *s.begin() << endl;
  // cout << *s.end() << endl;
  // cout << *(s.end() - 1) << endl;

  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());

  // sort(s.begin(), s.begin()+2);

  cout << s << endl;

  return 0;
}
