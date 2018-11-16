#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEvenOrNegative(int a){
  return a % 2 == 0 || a < 0;
}

int main(){
  vector<int> v;
  for(int i = 0; i < 10; i++)
    v.push_back(i);

  for (int i = -3; i < 0; i++)
    v.push_back(i);

  int cnt = count_if(v.begin(), v.end(), isEvenOrNegative);

  cout << cnt << endl;

  // for (int i = 0; i < n; i++)
  //   if(a % 2 == 0 || a < 0)
  //     cnt++;


  return 0;
}