#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  v.push_back(3);
  v.push_back(10);
  v.push_back(4);
  v.push_back(1);
  v.push_back(6);

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << endl;

  // v.erase(v.begin());
  // v.erase(v.begin()+2);
  // v.erase(v.begin(), v.begin()+3);
  // v.erase(v.begin(), v.end()); <==> // v.clear()

  v.erase(v.end() - 2); 

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;

  return 0;
}