#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string s; // abba
  cin >> s;

  int left = 0;
  int right = s.size() - 1;

  while(left < right){
    if(s[left] != s[right]){
      cout << "no";
      return 0;
    }
    left++;
    right--;
  }
  cout << "yes";

  return 0;
}