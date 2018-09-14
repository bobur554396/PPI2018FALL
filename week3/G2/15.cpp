#include <iostream>

using namespace std;

int main(){
  int sum = 0, n;
  // 2 3 4 5 0
  // 2 + 3 + 4 + 5 = 14
  
  do{
    cin >> n;
    sum += n;
  } while(n); // while(n != 0)

  cout << sum << endl;

  // while(i < n){
  //   cout << i << " ";
  //   i++;
  // }

  return 0;
}