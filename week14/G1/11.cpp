#include "student.h"
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  freopen("in.txt", "r", stdin);
  int n;
  cin >> n;
  Student s[n];
  for (int i = 0; i < n; i++)
    s[i].read();

  findByName(s, n, "CS");

  // sort(s, s + n, sort_by_name);

  // for (int i = 0; i < n; i++)
  //   s[i].show();

  return 0;
}