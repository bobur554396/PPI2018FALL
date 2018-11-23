#include <iostream>
#include <algorithm>
#include <vector>
#include "student.h"

using namespace std;

int main(){
  freopen("in.txt", "r", stdin);
  int n;
  cin >> n;
  Student s[n];
  

  for (int i = 0; i < n; i++)
    s[i].read();

  sort(s, s + n, sort_by_gpa);

  for (int i = 0; i < n; i++)
    s[i].show();

  return 0;
}