#include <iostream>
#include <algorithm>
#include <vector>
#include "point.h"

using namespace std;

int main(){
  Point p1;
  p1.x = 2;
  p1.y = 3;

  Point p2;
  p2.x = 4;
  p2.y = 5;

  cout << p1.distance(p2);

  return 0;
}