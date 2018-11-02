#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

void show(stack<int> s){
  while (s.size() != 0){
    cout << s.top() << endl;
    s.pop();
  }
}

int main(){
  stack<int> s;
  s.push(3);
  s.push(5);
  s.push(1);
  
  show(s);
  
  // cout << s.size() << endl;
  // s.pop();
  // cout << s.top() << endl;

  return 0;
}