#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

float my_max(float a, float b){
	if(a > b)
		return a;
	else
		return b;
}


int main(){
	cout << my_max(2.4, 3.7);
	return 0;
}
