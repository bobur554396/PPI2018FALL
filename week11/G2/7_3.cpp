#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;
stack<char> st;

bool check(string s){
  for (int i = 0; i < s.size(); i++){
    if (s[i] == '(' || s[i] == '{')
      st.push(s[i]);
    else{
      if (st.empty())
        return false;
      char st_top = st.top();
      char cur = s[i];
      if(st_top == '(' && cur != ')')
        return false;
      if(st_top == '{' && cur != '}')
        return false;
      st.pop();
    }
  }
  return st.empty();
}

int main(){
  /*
  Validate brackets

  ({{}}{}) --- Yes
  {}) -- No
  ({} -- No
  ()({}) -- Yes
  (({})) --- Yes
  */
  string s;
  cin >> s;
  if(check(s))
    cout << "Yes";
  else 
    cout << "No";

  return 0;
}