#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
  string name; // fields
  int age;
  double gpa;
};

int main(){
  freopen("in.txt", "r", stdin);
  // freopen("out.txt", "w", stdout);
  
  int n;
  cin >> n;
  // int a[n];
  Student s[n];
  for(int i = 0; i < n; i++)
    cin >> s[i].name >> s[i].age >> s[i].gpa;

  for (int i = 0; i < n; i++)
    cout << s[i].name << " " << s[i].age << " " << s[i].gpa << endl;
  return 0;
}