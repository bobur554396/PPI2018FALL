#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // a * 15 * 0.2
  if(b > a * 15 * 0.2){
    cout << "F\n";
  } else {
    cout << "Pass\n";
  }

  return 0;
}