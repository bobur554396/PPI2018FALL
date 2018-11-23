#include <iostream>
#include <cmath>

using namespace std;

struct Point{
  int x, y;

  double distance(Point p){
    int dx = x - p.x;
    int dy = y - p.y;
    return sqrt(dx * dx + dy * dy);
  }
};
