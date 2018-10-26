#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  int a;    // value
  string c; // command

  for (;;)
  {
    cin >> c;
    if (c == "exit")
      break;
    if (c == "add")
    {
      cin >> a;
      v.push_back(a);
    }
  }

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}