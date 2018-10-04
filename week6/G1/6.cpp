#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello";

  // s.front() <=> s[0]
  // s.back() <=> s[s.size() - 1]
  cout << s.front() << " " << s.back();

  return 0;
}