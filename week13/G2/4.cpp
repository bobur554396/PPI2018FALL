#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
  int a[6] = {1, 1, 2, 2, 2, 3};

  vector<int> v(a, a + 6);

  vector<int>::iterator bound;
  bound = unique(v.begin(), v.end());

  vector<int>::iterator it;
  for(it = v.begin(); it != bound; it++)
    cout << (*it) << " ";

  return 0;
}