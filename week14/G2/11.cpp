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

  // showAboveGpa(s, n, 3.6);

  findByName(s, n, "nt2");

  return 0;
}