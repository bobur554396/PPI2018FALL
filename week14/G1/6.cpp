#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
  string name; // fields
  int age;
  double gpa;
};

int main(){
  int a = 2;
  Student s;
  s.name = "Student 1";
  s.age = 18;
  s.gpa = 3.9;  

  cout << s.name << " " << s.age << " " << s.gpa << endl;
  
  return 0;
}