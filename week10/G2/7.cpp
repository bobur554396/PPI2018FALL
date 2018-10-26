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
  
  v.clear(); // <==> v.erase(v.begin(), v.end());

  cout << v.size() << endl;  


  return 0;
}