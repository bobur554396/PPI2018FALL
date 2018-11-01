#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main(){
  /*
  ()() -- Yes
  (()) -- Yes
  (() -- No
  )) -- No
  */
  string s;
  cin >> s;
  stack<char> st;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '(')
      st.push(s[i]);
    else{
      if(st.empty()){
        cout << "No";
        return 0;
      }
      st.pop();
    } 
  }
  if(st.empty())
    cout << "Yes";
  else
    cout << "No";


  return 0;
}
