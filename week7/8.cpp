#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void sum(int a, int b){
	cout << a + b << endl;
}

int sum2(int a, int b){
	return a + b;
}
int main(){
	// sum(2, 3);
	int res = sum2(3, 4);
	float r = sqrt(9);
	cout << res << endl;
	return 0;
}
