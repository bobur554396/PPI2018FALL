#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  int a; // value

  for(;;){
    cin >> a;
    if(a == 0)
      break;
    v.push_back(a);
  }

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  

  return 0;
}