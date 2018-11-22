#include <iostream>

using namespace std;

struct Student{
  string name; // fields
  int age;
  double gpa;

  void read(){
    cin >> name >> age >> gpa;
  }

  void show(){ // method, function
    cout << name << " " << age << " " << gpa << endl;
  }
};

bool sort_by_age(Student s1, Student s2){
  if (s1.age == s2.age)
    return s1.gpa < s2.gpa;
  return s1.age < s2.age;
}

bool sort_by_gpa(Student s1, Student s2)
{
  return s1.gpa > s2.gpa;
}

bool sort_by_name(Student s1, Student s2)
{
  return s1.name > s2.name;
}

void showGpaAbove(Student *s, int n, double g){
  for(int i = 0; i < n; i++){
    if(s[i].gpa > g)
      s[i].show();
  }
}

void findByName(Student *s, int n, string name){
  for (int i = 0; i < n; i++){
    if (s[i].name.find(name) != string::npos)
      s[i].show();
  }
}
