#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student{
  string name; // fields
  int age;
  double gpa;
};

int main(){
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  int n;
  cin >> n;

  cout << n*n << endl;

  return 0;
}