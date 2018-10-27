#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int val;
  string command;
  vector<int> v;
  while (true){
    cin >> command;
    if(command == "exit")
      break;
    if(command == "add"){
      cin >> val;
      v.push_back(val);
    }
    if (command == "find"){
      int a;
      cin >> a;
      if (find(v.begin(), v.end(), a) != v.end())
        cout << "found\n";
      else
        cout << "not found\n";
    }
  }

  cout << v.size() << endl;

  return 0;
}