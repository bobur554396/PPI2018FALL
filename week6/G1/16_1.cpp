#include <iostream>
#include <cmath>

using namespace std;

int main(){
  string s; // abba
  cin >> s;
  int n = s.size();
  for(int i = 0; i < n / 2; i++){
    if (s[i] != s[n - 1 - i]){
      cout << "no";
      return 0;
    }
  }
  cout << "yes";

  return 0;
}