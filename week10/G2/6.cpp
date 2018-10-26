#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);
  for (int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";
  
  cout << endl;
  
  // v.erase(v.begin()+1);
  v.erase(v.begin() + 1, v.begin() + 3);

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";

  cout << endl;

  return 0;
}