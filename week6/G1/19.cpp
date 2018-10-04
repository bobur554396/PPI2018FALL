#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  char c[] = {'1', '2'};
  
  int b = stoi("12asd2");
  int a = atoi(c);


  cout << a * a << endl;
  cout << b * b << endl;



  return 0;
}