#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>

using namespace std;

void show(queue<int> q){
  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
}

int main(){
  queue<int> q;
  q.push(3);
  q.push(5);
  q.push(1);
  q.push(10);

  show(q);
  // cout << q.size() << endl;
  // q.pop();
  // cout << q.front() << " " << q.back() << endl; 

  return 0;
}