#include <iostream>

using namespace std;

int main()
{
  /*
  Linear search of K from given array
  input
  4
  2 5 1 7
  1
  output
  YES
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> k;
  bool found = false;
  for (int i = 0; i < n; i++){
    if (a[i] == k){
      found = true;
      break;
    }
  }
  // if(found == true) <==> if(found)
  // if(found == false) <==> if(!found)
  if(found == true)
    cout << "YES";
  else
    cout << "NO";
  

  return 0;
}