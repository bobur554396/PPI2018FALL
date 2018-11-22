#include <iostream>
#include <algorithm>
#include <vector>

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

bool cmp(int a, int b){
  return a > b;
}

bool sort_by_age(Student s1, Student s2){
  if(s1.age == s2.age) return s1.gpa < s2.gpa;
  return s1.age < s2.age;
}

bool sort_by_gpa(Student s1, Student s2){
  return s1.gpa > s2.gpa;
}

bool sort_by_name(Student s1, Student s2){
  return s1.name > s2.name;
}

int main(){
  freopen("in.txt", "r", stdin);
  int n;
  cin >> n;
  Student s[n];
  for (int i = 0; i < n; i++)
    s[i].read();

  sort(s, s + n, sort_by_name);

  for (int i = 0; i < n; i++)
    s[i].show();

  return 0;
}