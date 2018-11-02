#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <deque>

using namespace std;


int main(){
  deque<int> dq;

  dq.push_front(3);
  dq.push_back(5);
  dq.push_front(4);
  dq.push_back(1);

  dq.pop_front();

  deque<int>::iterator it;
  for(it = dq.begin(); it != dq.end(); it++)
    cout << (*it) << " ";


  return 0;
}