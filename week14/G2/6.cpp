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
  int a;
  Student s;

  s.name = "Student1";
  s.age = 18;
  s.gpa = 3.9;

  cout << s.name << " " << s.age << " " << s.gpa << endl;

  

  return 0;
}