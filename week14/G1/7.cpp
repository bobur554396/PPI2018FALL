#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
  string name; // fields
  int age;
  double gpa;
};

int main(){
  Student s;
  cin >> s.name >> s.age >> s.gpa; 
  cout << s.name << " " << s.age << " " << s.gpa << endl;

  return 0;
}