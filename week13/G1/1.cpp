#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// int my_count_if(left, right, func){
//   int cnt = 0;
//   vector<int>::iterator it;
//   for(it = left; it != right; it++)
//     if(func(*it))
//       cnt++;
//   return cnt;
// }

bool isEven(int a){
  return a % 2 == 0;
}

// ["hi", "word", "kbtu", "fit"] // 2
bool isLong(string s){
  return s.size() >= 4;
}

int main(){
  vector<int> v;

  for(int i = 0; i < 10; i++)
    v.push_back(i);

  int cnt = count_if(v.begin(), v.end(), isEven);
  
  cout << cnt << endl;

  
  return 0;
}