#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello world c++ world cpp";
  string t = "world";

  int cnt = 0;
  size_t f = s.find(t);
  while(f != string::npos){
    cnt++;
    cout << f << endl;
    f = s.find(t, f+t.size());
  }

  cout << cnt << endl;

  return 0;
}