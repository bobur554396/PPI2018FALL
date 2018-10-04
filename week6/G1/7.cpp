#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s = "hello";
  // int a[] = {1, 2, 3};

  // sort(a, a + 3);
  // cout << a+3;
  // cout << *(s.end()-1);
  sort(s.begin(), s.end());

  cout << s << endl;

  return 0;
}