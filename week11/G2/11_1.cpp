#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

vector<int> fillRange(int a, int b){
  vector<int> v;
  for(int i = a; i <= b; i++)
    v.push_back(i);
  return v;
}

void show(vector<int> v){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

bool cmp(const vector<int> &a, const vector<int> &b){
  // sort() for a
  // sort() for b
  return a[a.size() - 1] > b[b.size() - 1];
}

int main(){

  vector< vector<int> > v;
  // int a[n][m];

  vector<int> v1 = fillRange(11, 15);
  vector<int> v2 = fillRange(3, 10);
  vector<int> v3 = fillRange(10, 12);

  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);

  sort(v.begin(), v.end(), cmp);

  // cout << v.size() << endl;
  vector< vector<int> >::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    show(*it);
  }
  // vector< pair<int, int> > vv;

  return 0;
}