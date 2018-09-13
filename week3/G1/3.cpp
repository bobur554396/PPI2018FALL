#include <iostream>

using namespace std;

int main(){
  // 1 2 3 0 ==== 6
  int n, res = 0;
  do {
    cin >> n;
    res += n;
  } while(n);

  cout << res << endl;

  return 0;
}