#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if(a + b > c){
    if(a + c > b){
      if(b + c > a){
        cout << "YES";
        return 0;
      } 
    }
  }
  cout << "NO";

  return 0;
}