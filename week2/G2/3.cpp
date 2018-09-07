#include <iostream>

using namespace std;

int main()
{
  // ++ --, post/pre (prefix)
  
  int a = 2;
  a++; // a = a + 1; // a += 1; // post inc

  ++a; // a = a + 1; // a += 1; // pre inc
  // a = 4;

  int b = a++;
  // a = 5;
  // cout << a << " " << b << endl;

  int c = ++a;
  // cout << a << " " << c << endl;
  // a = 6;

  // cout << a++ << endl;
  // cout << a << endl;
  // a = 6;

  int a1 = 5;
  int d = a1++ + ++a;
  // cout << a << " " << a1 << " " << d << endl; 
  // a = 7;
  
  int dd = ++++a; 

  // cout << dd << " " << a << endl;

  // int a2 = 5++;
  // int a2 = ++a++;
  // a = 9;

  char c1 = 'A';
  // c1 = c1 + 1;
  cout << c1++ << "\n";
  cout << c1 << "\n";
  c1 += 10;
  cout << c1 << "\n";


  return 0;
}