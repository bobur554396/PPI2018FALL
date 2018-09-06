#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t1 = 0, t2 = 1, n, next;
  cin >> n;

  for(int i = 0; i < n; i++){
    if(i == 0)
      cout << t1 << " ";
    if(i == 1)
      cout << t2 << " ";
    next = t1 + t2;
    t1 = t2;
    t2 = next;
    
    cout << next << " ";
  }

  return 0;
}