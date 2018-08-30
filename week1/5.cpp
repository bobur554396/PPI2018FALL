#include <iostream>

using namespace std;

int main(){

  int n1, n2, n3;

  cout << "Enter n1, n2 and n3:\n";

  cin >> n1 >> n2;
  cin >> n3;

  cout << (n1 + n2) % n3;

  return 0;
}