#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  v.push_back(3);
  v.push_back(10);
  v.push_back(4);
  v.push_back(1);

  // int a[2] = {2, 3};
  // cout << *a << endl; // a[0] == *(a + 0)
  
  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " "; 
    // cout << v[i] << " ";

  return 0;
}