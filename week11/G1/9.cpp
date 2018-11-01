#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

bool check(char a, char b){
  if(a == '(' && b == ')') return true;
  else if(a == '{' && b == '}') return true;
  return false;
}

int main(){
  /*
  ({}) -- Yes
  ((){}) -- Yes
  (()}} -- No
  {{}})) -- No
  */
  string s;
  cin >> s;
  stack<char> st;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == '(' || s[i] == '{')
      st.push(s[i]);
    else{
      if (st.empty()){
        cout << "No";
        return 0;
      }
      char cur = s[i];
      char stack_top = st.top();
      if (check(stack_top, cur))
        st.pop();
    }
  }
  if (st.empty())
    cout << "Yes";
  else
    cout << "No";

  return 0;
}
