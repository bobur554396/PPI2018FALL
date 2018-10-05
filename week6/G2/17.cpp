#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string s = "54";
  char c[2] = {'5', '4'};

  int a = atoi(c);
  int b = stoi(s);

  cout << a * 2 << endl << b * 2;


  return 0;
}
