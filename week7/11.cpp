#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

float my_pow(float base, int exp){
	float p = 1;
	for(int i = 0; i < abs(exp); i++){
		p *= base;
	}
	if(exp < 0){
		return 1 / p;
	}
	return p;
}

int main(){
	int a, b;
	cin >> a >> b;
	float r = my_pow(a, b);
	cout << r << endl;
	return 0;
}
