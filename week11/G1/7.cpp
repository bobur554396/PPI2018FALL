#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

void show(stack<int> s){
  while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }
}

int main(){
  stack<int> s;
  s.push(3);
  s.push(5);
  s.push(1);
  s.push(10);

  // s.pop();
  // cout << s.top() << endl;
  // cout << s.empty() << endl;
  
  show(s);

  return 0;
}
