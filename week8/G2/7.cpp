#include <iostream>
#include <cmath>

using namespace std;

int f1(int a[], int n)
{
  int maxi = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
  }
  return maxi;
}

int f2(int a[], int n){
  if(n == 1)
    return a[0];
  return max(a[n - 1], f2(a, n - 1));
}

int main()
{
  int a[] = {2, 7, 9, 1};
  int n = 4;
  cout << f1(a, n) << endl << f2(a, n) << endl;
  return 0;
}