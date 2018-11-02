#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main()
{
  /*
  Validate brackets

  () --- Yes
  ()() -- Yes
  )( -- No
  (()) --- Yes
  (() -- No
  ()) -- No
  )) -- No
  */
  string s;
  stack<char> st;
  cin >> s;
  for (int i = 0; i < s.size(); i++){
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
    cout <<  "Yes";
  else 
    cout << "No";

  

    return 0;
}