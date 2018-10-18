#include <iostream>
#include <cmath>

using namespace std;

int f1(int a[], int n){
  int mini = a[0];
  for(int i = 1; i < n; i++){
    a[0] = min(a[0], a[i]);
    if(a[i] < mini)
      mini = a[i];
  }
  return mini;
}

int f2(int a[], int n){
  if(n == 1)
    return a[0];
  return min(a[n - 1], f2(a, n - 1));
}

int main()
{
  int a[] = {9, 3, 4, 10};
  int n = 4;
  cout << f2(a, n) << endl;
  return 0;
}