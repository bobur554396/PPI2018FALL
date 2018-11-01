#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void show(map<char, int> m){
  map<char, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
  }
  cout << endl;
}

int main(){
  /*
  How many times occurs each letter in given string
  
  Input:
  aaabbbcca

  Output:
  a 4
  b 3
  c 2
  */

  string s;
  cin >> s;
  map<char, int> m;
  for(int i = 0; i < s.size(); i++){
    m[s[i]]++;
  }

  // show(m);
  for(char c = 'a'; c <= 'z'; c++){
    cout << c << " " << m[c] << "\n";
    // if(m[c] > 0)
    //   cout << c << " "<< m[c] << endl;
    // else
    //   cout << c << " " << 0 << endl;
  }


  return 0;
}
