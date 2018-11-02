#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<char, int> m;

void show(map<char, int> m){
  map<char, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++)
    cout << (*it).first << " " << (*it).second << endl;
  cout << endl;
}

int main(){
  /* 
  How many times occurs each letter in given string
  
  Input:
  aaabbcb

  Output:
  a 3
  b 3
  c 1
  */
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    char c = tolower(s[i]);
    m[c]++;
  }
    

  // show(m);
  for(char c = 'a'; c <= 'z'; c++)
    cout << c << " " << m[c] << endl;
    // if(m[c] > 0)
    //   cout << c << " " << m[c] << endl;
    // else
    //   cout << c << " " << 0 << endl;

  return 0;
}