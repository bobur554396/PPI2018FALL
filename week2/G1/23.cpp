#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = a; i <= b; i++)
  {
    if (i % 3 == 0){
      cnt++;
      cout << i << " ";
    }
  }

  cout << endl << cnt << endl;

  return 0;
}