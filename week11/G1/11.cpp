#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>

using namespace std;

vector<int> fillRange(int a, int b){
  vector<int> res;
  for(int i = a; i <= b; i++)
    res.push_back(i);
  return res;
}

void show(vector<int> v){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

// int a, b;
// for(int i = 0; i < 3; i++){
//   cin >> a >> b;
//   if(i == 0)
//     v1 = fillRange(a, b);
//   if(i == 1)
//     v2 = fillRange(a, b);
// }

bool cmp2(int a, int b){
  return a < b;
}

bool cmp(const vector<int> &a, const vector<int> &b){
  vector<int> vec1 = a;
  vector<int> vec2 = b;
  sort(vec1.begin(), vec1.end());
  sort(vec1.begin(), vec1.end());
  // sort(vec1.begin(), vec1.end(), cmp2);
  // sort(vec2.begin(), vec2.end(), cmp2);
  return vec1[vec1.size() - 1] > vec2[vec2.size() - 1];
  // return vec1[0] > vec2[0];
}

int main(){
  vector< vector<int> > v;
  vector<int> v1 = fillRange(12, 15);
  vector<int> v2 = fillRange(3, 10);
  vector<int> v3 = fillRange(9, 12);

  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);

  sort(v.begin(), v.end(), cmp);

  vector< vector<int> >::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    show((*it));
  }
  
  return 0;
}
