#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int a;
  vector<int> v;
  while(true){
    cin >> a;
    if(a == 0)
      break;
    v.push_back(a);
  }
  

  cout << v.size() << endl;

  return 0;
}